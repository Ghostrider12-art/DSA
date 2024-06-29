//You are given an array arr.The size of the array is given by sizeOfArray.You need to insert an element at the end.
//Array already have the sizeOfArray -1 elemnts
#include<iostream>
using namespace std;

/*
Efficient approach:
Time complexity: O(1)
    as we are directly inserting the element at the end of the array
Auxiliary space: O(1)
    as we are using only a constant amount of space
Logic:
    1.As in the given array we have sizeOfArray-1 elements, we can directly insert the element at the end of the array
Example how this works:
    arr[]={1,2,3,4,5}
    element=10
    1. arr[]={1,2,3,4,10}
    The element 10 is inserted at the end of the array

*/

void insertAtEnd(int arr[],int sizeOfArray,int element) {
arr[sizeOfArray-1]=element;
}

int main() {
    int sizeOfArray;
    cout << "Enter the size of the array: ";
    cin >> sizeOfArray;
    int arr[sizeOfArray];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<sizeOfArray-1;i++) {
        cin >> arr[i];
    }
    int element;
    cout << "Enter the element you want to insert at the end of the array: ";
    cin >> element;
    insertAtEnd(arr,sizeOfArray,element);
    cout << "The array after inserting the element at the end is: ";
    for(int i=0;i<sizeOfArray;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
