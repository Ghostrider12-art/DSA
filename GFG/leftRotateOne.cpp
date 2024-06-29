//Given an array of integer arr[] of size N and an integer, the tas,k is to rotate tje array elements to the left by one position
#include<iostream>
using namespace std;
 

/*
Efficient approach:
Time complexity: O(n)
     as we are iterating through the array once
Auxiliary space: O(1)
     as we are using only a constant amount of space
Logic: 
        1. Store the first element of the array in a temporary variable
        2. Shift all the elements of the array to the left by one position
        3. Store the temporary variable in the last position of the array
        4. Repeat the above steps m times
        5. The array will be rotated left by m positions
Example how this works:
    arr[]={1,2,3,4,5}
    m=2
    1. temp=1
    2. arr[]={2,3,4,5,5}
    3. arr[]={2,3,4,5,1}
    4. temp=2
    5. arr[]={3,4,5,1,1}
    6. arr[]={3,4,5,1,2}
    The array is rotated left by 2 positions
*/
int leftRotateOne(int arr[],int n) {
    int temp=arr[0];
    for(int i=1;i<n;i++) {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int m;
    cout << "Enter the number of positions to rotate the array: ";
    cin >> m;
    leftRotateOne(arr,m);
    cout << "The array after rotating left by one position is: ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}   