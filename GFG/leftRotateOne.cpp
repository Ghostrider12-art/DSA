//Given an array of integer arr[] of size N and an integer, the tas,k is to rotate tje array elements to the left by one position
#include<iostream>
using namespace std;

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