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