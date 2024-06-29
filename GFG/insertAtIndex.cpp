//You are given an array arr(0-based-index).The size of the array is given by sizeOfArray.You need to insert an element at given index.
#include<iostream>
using namespace std;
/*
Efficient approach:
Time complexity: O(n)
    as we are iterating through the array once
Auxiliary space: O(1)
    as we are using only a constant amount of space
Logic:
    1. Shift all the elements of the array to the right by one position starting from the last element
    2. Insert the element at the given index
    3. The element will be inserted at the given index
Example how this works:
    arr[]={1,2,3,4,5}
    index=2
    element=10
    1. arr[]={1,2,3,4,5}
    2. arr[]={1,2,3,4,4}
    3. arr[]={1,2,3,10,4}
    The element 10 is inserted at index 2

*/

void insertAtIndex(int arr[],int sizeOfArray,int index, int element) {
    for(int i=sizeOfArray;i>index;i--) {
        arr[i]=arr[i-1];
    }
    arr[index]=element;
}

int main() {
    int sizeOfArray;
    cout << "Enter the size of the array: ";
    cin >> sizeOfArray;
    int arr[sizeOfArray];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<sizeOfArray;i++) {
        cin >> arr[i];
    }
    int index;
    cout << "Enter the index at which you want to insert the element: ";
    cin >> index;
    int element;
    cout << "Enter the element you want to insert: ";
    cin >> element;
    insertAtIndex(arr,sizeOfArray,index,element);
    cout << "The array after inserting the element at the given index is: ";
    for(int i=0;i<sizeOfArray+1;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
