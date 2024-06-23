//Given an array of size n,write a program to check if it is sorted in ascending order or not, Equal values are allowed in an array and two consecutive equal values are considered to be sorted.
#include<iostream>
using namespace std;
/*
Naive approach:
Time complexity of this code is O(n^2)
    as we are using two nested loops to compare each element with every other element.
Auxiliary space used by this code is O(1)
    as we are using only two variables to store the size of the array and the elements of the array.
Logic:
    1. We compare each element with every other element in the array.
    2. If we find an element that is greater than the current element, we return false.
    3. If we do not find any such element, we return true.
Explain how this work:
    arr = {1, 2, 3, 4, 5}
    1. Compare 1 with 2, 3, 4, 5. No element is greater than 1. So, continue.
    2. Compare 2 with 3, 4, 5. No element is greater than 2. So, continue.
    3. Compare 3 with 4, 5. No element is greater than 3. So, continue.
    4. Compare 4 with 5. No element is greater than 4. So, continue.
    5. The array is sorted in ascending order. So, return true.
*/
bool isSorted(int arr[], int n) {
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[i]) {
                return false;
            }
        }
    }
    return true;
}
/*
Efficient approach:
Time complexity of this code is O(n)
    as we are iterating through the array only once.
Auxiliary space used by this code is O(1)
    as we are using only one variable to store the size of the array.
Logic:
    1. We iterate through the array from the second element to the last element.
    2. If we find an element that is less than the previous element, we return false.
    3. If we do not find any such element, we return true.
Explain how this work:
    arr = {1, 2, 3, 4, 5}
    1. Compare 2 with 1. 2 is greater than 1. So, continue.
    2. Compare 3 with 2. 3 is greater than 2. So, continue.
    3. Compare 4 with 3. 4 is greater than 3. So, continue.
    4. Compare 5 with 4. 5 is greater than 4. So, continue.
    5. The array is sorted in ascending order. So, return true.
*/
bool efficientIsSorted(int arr[], int n) {
    if(n==0 || n==1) { return true; }
    for(int i=1;i<n;i++) {
        if(arr[i-1]>arr[i]) {
            return false;
        }
    }
    return true;
}


int main() {
    cout << "Enter the size of the array" << endl;
    int n;
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    
    if(isSorted(arr, n)) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is not sorted in ascending order." << endl;
    }
    if(efficientIsSorted(arr, n)) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is not sorted in ascending order." << endl;
    }
    
    return 0;
}