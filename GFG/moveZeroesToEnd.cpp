//Given an array of n numbers.The problem is to move all the 0's to the end of the array while maintaining the order of the other elements.Only single traversal of the array is required.
#include<iostream>
using namespace std;

/*
Efficient approach:
Time complexity of this code is O(n)
    as we are iterating through the array only once.
Auxiliary space used by this code is O(1)
    as we are using only one variable to store the size of the array.
Logic:
    1. We take a variable count to store the number of non-zero elements in the array.
    2. We iterate through the array and if we find a non-zero element, we place it at the count-th position in the array.
    3. We increment the count variable.
    4. After the loop ends, we place zeroes from the count-th position to the end of the array.
Explain how this work:
    arr = {1, 0, 2, 0, 3, 0, 4, 0, 5}
    1. count = 0. arr = {1, 0, 2, 0, 3, 0, 4, 0, 5}
    2. arr[0] = 1. count = 1. arr = {1, 0, 2, 0, 3, 0, 4, 0, 5}
    3. arr[2] = 2. count = 2. arr = {1, 2, 2, 0, 3, 0, 4, 0, 5}
    4. arr[4] = 3. count = 3. arr = {1, 2, 3, 0, 3, 0, 4, 0, 5}
    5. arr[6] = 4. count = 4. arr = {1, 2, 3, 4, 3, 0, 4, 0, 5}
    6. arr[8] = 5. count = 5. arr = {1, 2, 3, 4, 5, 0, 4, 0, 5}
    7. Place zeroes from the count-th position to the end of the array. arr = {1, 2, 3, 4, 5, 0, 0, 0, 0}
*/
int moveZeroesToend(int arr[],int n) {
    int count =0;
    for(int i=0;i<n;i++) {
        if(arr[i]!=0) {
            arr[count++]=arr[i];
        }
    }   
    for(int i=count;i<n;i++) {
        arr[i]=0;
    }
    cout << "Array after moving zeroes to the end: ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    moveZeroesToend(arr,n);
    return 0;
}