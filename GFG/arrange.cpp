/*
Given an array arr[] of size N where every element is in the range from 0 to n-1.
Rearrange the given array so that the transformed array arrT[i] becomes arr[arr[i]].
NOTE: arr and arrT are both same variables, representing the array before and 
after transformation respectively.
*/
#include<iostream>
using namespace std;
/*
Efficient approach:
Time complexity: O(n)
        as we are using only one loop to iterate over the array.
Auxiliary space: O(1)
        as we are not using any extra space.
Logic:
    1. Traverse the array from left to right.
    2. For each element, add the element at arr[arr[i]]%n to the current element multiplied by n.
    3. Traverse the array from left to right.
    4. For each element, divide the element by n.
    5. Return the transformed array.
Example how this works:
    arr[] = {1, 3, 4, 2, 0}
    1. For i = 0, arr[i] = 1, arr[arr[i]] = arr[1] = 3, so arr[i] = arr[i] + (arr[arr[i]]%n)*n = 1 + (3%5)*5 = 16.
    2. For i = 1, arr[i] = 3, arr[arr[i]] = arr[3] = 2, so arr[i] = arr[i] + (arr[arr[i]]%n)*n = 3 + (2%5)*5 = 13.
    3. For i = 2, arr[i] = 4, arr[arr[i]] = arr[4] = 0, so arr[i] = arr[i] + (arr[arr[i]]%n)*n = 4 + (0%5)*5 = 4.
    4. For i = 3, arr[i] = 2, arr[arr[i]] = arr[2] = 4, so arr[i] = arr[i] + (arr[arr[i]]%n)*n = 2 + (4%5)*5 = 22.
    5. For i = 4, arr[i] = 0, arr[arr[i]] = arr[0] = 1, so arr[i] = arr[i] + (arr[arr[i]]%n)*n = 0 + (1%5)*5 = 5.
    6. Return the transformed array arr[] = {16, 13, 4, 22, 5}.
*/
void arrange(long long arr[], int n) {
    for(int i=0;i<n;i++){ // to transform the array
        arr[i]=arr[i]+(arr[arr[i]]%n)*n; 
    }
    for(int i=0;i<n;i++){ // to get the transformed array
        arr[i]=arr[i]/n; 
    }
}
int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    long long a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    arrange(a,n);
    cout<<"The transformed array is: ";
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}