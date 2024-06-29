/*
 Given an array arr[] of N distinct integers, check if this array is Sorted
 (non-increasing or non-decreasing) and Rotated counter-clockwise. 
 Note that input array may be sorted in either increasing or decreasing order, then rotated.
 A sorted array is not considered as sorted and rotated, i.e.,
 there should be at least one rotation.
*/
#include<iostream>
using namespace std;

/*
Increasing function:
Time complexity: O(n)
       as we are using only one loop to iterate over the array.
Auxiliary space: O(1)
    as we are not using any extra space.
Logic:
    1. Initialize i = 0.
    2. Traverse the array from left to right until the array is in increasing order.
    3. If the array is in increasing order, then return false.
    4. Increment i.
    5. Traverse the array from i to n-1 until the array is in increasing order.
    6. If the array is in increasing order, then return true.
    7. Otherwise, return false.
*/
// Function to check if array is sorted in increasing order or not 
    bool  increasing (int arr[], int n) {
    	int i = 0;
        while (i < n - 1 and arr[i] <= arr[i + 1]) i++;
    	if (i == n - 1) return false;
    	i++;
    	while (i < n - 1 and arr[i] <= arr[i + 1]) i++;
    	if (i == n - 1 and arr[n - 1] <= arr[0]) { return true;}
    	else {return false; }
    }
/*
Decreasing function:
Time complexity: O(n)
       as we are using only one loop to iterate over the array.
Auxiliary space: O(1)
    as we are not using any extra space.
Logic:
    1. Initialize i = 0.
    2. Traverse the array from left to right until the array is in decreasing order.
    3. If the array is in decreasing order, then return false.
    4. Increment i.
    5. Traverse the array from i to n-1 until the array is in decreasing order.
    6. If the array is in decreasing order, then return true.
    7. Otherwise, return false.

*/
// Function to check if array is sorted in decreasing order and rotated
    bool decreasing (int arr[], int n) {
    	int i = 0;
    	while (i < n - 1 and arr[i] >= arr[i + 1]) i++;
    	if (i == n - 1) return false;
    	i++;
    	while (i < n - 1 and arr[i] >= arr[i + 1]) i++;
    	if (i == n - 1 and arr[n - 1] >= arr[0]) {return true; }
    	else { return false; }
    }
/*
Efficient approach:
Time complexity: O(n)
       as we are using only one loop to iterate over the array.
Auxiliary space: O(1)
    as we are not using any extra space.
Logic:
    1. Check if the array is in increasing order or decreasing order.
    2. If the array is in increasing order or decreasing order, then return true.
    3. Otherwise, return false.
Example how this works:
    arr[] = {30, 20, 10, 50, 35}
    1. Check if the array is in increasing order or decreasing order.
    2. The array is in decreasing order, so return true.
    arr[] = {30, 20, 10, 5, 35}
    1. Check if the array is in increasing order or decreasing order.
    2. The array is not in increasing order or decreasing order, so return false.
*/
// Function to check if array is sorted and rotated
    bool checkRotatedAndSorted(int arr[], int num) {
    	return (increasing (arr, num) || decreasing (arr, num));
    }
int main() {
    int num;
    cout<<"Enter the size of the array: ";
    cin>>num;
    int arr[num];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<num;i++) {
        cin>>arr[i];
    }
    if(checkRotatedAndSorted(arr,num)) {
        cout<<"Yes, the array is sorted and rotated."<<endl;
    }
    else {
        cout<<"No, the array is not sorted and rotated."<<endl;
    }
    return 0;
}