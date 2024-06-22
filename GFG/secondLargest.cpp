//Given an array of integers, our task is to write a program that efficiently finds the second largest element present in the array. 
#include<iostream>
using namespace std;

/*
Efficient approach:
Time complexity: O(n)
as we are traversing the array only once.
Auxiliary space: O(1)
as we are using only two variables to store the first and second largest elements.
Logic:
1. Initialize two variables first and second to -1.
2. Traverse the array from the second element.
3. If the current element is greater than the first element, then update the second element to the first element and the first element to the current element.
4. If the current element is less than the first element, then check if the second element is -1 or the current element is greater than the second element. If true, then update the second element to the current element.
5. Return the second element.
 */
int secondLargest(int arr[], int n) {
    int first =arr[0];
    int second = -1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[first]){
            second = first;
            first = i;
        }
        else if(arr[i]<arr[first]){
            if(second == -1 || arr[second]<arr[i]){
                second = i;
            }
        }
    }
    return second;
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int  result=secondLargest(arr,n);
    cout<<"Second largest element is: "<<arr[result];

    return 0;
}