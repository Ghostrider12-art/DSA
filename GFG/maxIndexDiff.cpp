//Given an array a of n positive integers.The task is to find the maximum of j-i subjected to the constraint of a[i] <= a[j]and i <= j.
#include<iostream>
using namespace std;

/*
Naive approach:
Time complexity: O(n^2)
      as we are using two loops to iterate over the array.
Space complexity: O(1)
        as we are not using any extra space.
Logic:
    1. Traverse the array from left to right.
    2. For each element, traverse the array from right to left.
    3. If we find an element greater than or equal to the current element, then calculate the difference between the two indexes and update the maximum difference found so far.
    4. Return the maximum difference found.
Example how this works:
    arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
    1. For i = 0, j = 5, arr[j] = 80 >= arr[i] = 34, so the difference between the indexes is 5.
    2. For i = 1, j = 5, arr[j] = 80 >= arr[i] = 8, so the difference between the indexes is 4.
    3. For i = 2, j = 5, arr[j] = 80 >= arr[i] = 10, so the difference between the indexes is 3.
    4. For i = 3, j = 5, arr[j] = 80 >= arr[i] = 3, so the difference between the indexes is 2.
    5. For i = 4, j = 5, arr[j] = 80 >= arr[i] = 2, so the difference between the indexes is 1.
    6. For i = 5, j = 5, arr[j] = 80 >= arr[i] = 80, so the difference between the indexes is 0.
    7. For i = 6, j = 6, arr[j] = 80 >= arr[i] = 30, so the difference between the indexes is 0.
    8. For i = 7, j = 7, arr[j] = 80 >= arr[i] = 33, so the difference between the indexes is 0.
    9. For i = 8, j = 8, arr[j] = 80 >= arr[i] = 1, so the difference between the indexes is 0.
    10. The maximum difference found is 5.
    11. Return 5.
*/
int maxIndexDiff(int arr[], int n) { 
        int maxDiff = 0;
        for (int i = 0; i < n; i++) {
            for (int j = n - 1; j > i; j--) {
                if (arr[j] >= arr[i] && maxDiff < (j - i)) {
                    maxDiff = j - i;
                    break;
                }
            }
        }
        return maxDiff;
}
 /*
 Efficient approach:
Time complexity: O(n)
      as we are using only one loop to iterate over the array.  
Auxiliary space: O(n)
      as we are using two extra arrays of size n.
Logic:
    1. Create two arrays LMin[] and RMax[] of size n.
    2. LMin[i] stores the minimum element from 0 to i.
    3. RMax[i] stores the maximum element from n-1 to i.
    4. Initialize i = 0, j = 0, and maxDiff = -1.
    5. Traverse the array from left to right.
    6. If LMin[i] <= RMax[j], then update the maxDiff and increment j.
    7. Otherwise, increment i.
    8. Return the maxDiff.
Example how this works:
    arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
    1. LMin[] = {34, 8, 8, 3, 2, 2, 2, 2, 1}
    2. RMax[] = {80, 80, 80, 80, 80, 80, 33, 33, 1}
    3. i = 0, j = 0, maxDiff = -1
    4. LMin[0] = 34, RMax[0] = 80, 34 <= 80, so maxDiff = 0
    5. i = 0, j = 1, maxDiff = 0
    6. LMin[0] = 34, RMax[1] = 80, 34 <= 80, so maxDiff = 1
    7. i = 0, j = 2, maxDiff = 1
    8. LMin[0] = 34, RMax[2] = 80, 34 <= 80, so maxDiff = 2
    9. i = 0, j = 3, maxDiff = 2
    10. LMin[0] = 34, RMax[3] = 80, 34 <= 80, so maxDiff = 3
    11. i = 0, j = 4, maxDiff = 3
    12. LMin[0] = 34, RMax[4] = 80, 34 <= 80, so maxDiff = 4
    13. i = 0, j = 5, maxDiff = 4
    14. LMin[0] = 34, RMax[5] = 80, 34 <= 80, so maxDiff = 5
    15. i = 0, j = 6, maxDiff = 5
    16. LMin[0] = 34, RMax[6] = 33, 34 > 33, so i = 1
    17. i = 1, j = 6, maxDiff = 5
 */
int efficientMaxIndexDiff(int arr[], int n)  { 
        if(n==1){ return 0; }
        int maxDiff; 
        int i, j; 
        int *LMin = new int[n];
        int *RMax = new int[n];
        LMin[0] = arr[0]; 
        for (i = 1; i < n; ++i) 
            LMin[i] = min(arr[i], LMin[i-1]); 
        RMax[n-1] = arr[n-1]; 
        for (j = n-2; j >= 0; --j) 
            RMax[j] = max(arr[j], RMax[j+1]); 
         
        i = 0, j = 0, maxDiff = -1; 
        while (j < n && i < n)    { 
            if (LMin[i] <= RMax[j])   { 
                 maxDiff = max(maxDiff, j-i); 
                j = j + 1;  } 
            else
                i = i+1;  } 
        return maxDiff; 
    }

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Maximum difference between the indexes is: " << maxIndexDiff(arr, n) << endl;
    cout << "Maximum difference between the indexes is: " << efficientMaxIndexDiff(arr, n) << endl;
    return 0;
}
