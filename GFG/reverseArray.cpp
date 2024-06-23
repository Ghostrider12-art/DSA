//Given an array(or string), the task is to reverse the array.
#include<iostream>
using namespace std;

/*
Efficient approach:
Time complexity of this code is O(n)
    as we are iterating through the array only once.
Auxiliary space used by this code is O(1)
    as we are using only one variable to store the size of the array.
Logic:
    1. We take two pointers, start and end, pointing to the first and last element of the array respectively.
    2. We swap the elements at the start and end pointers.
    3. We increment the start pointer and decrement the end pointer.
    4. We repeat steps 2 and 3 until the start pointer is less than the end pointer.
Explain how this work:
    arr = {1, 2, 3, 4, 5}
    1. Swap 1 and 5. arr = {5, 2, 3, 4, 1}
    2. Increment start and decrement end. start = 1, end = 3.
    3. Swap 2 and 4. arr = {5, 4, 3, 2, 1}
    4. Increment start and decrement end. start = 2, end = 2.
    5. The start pointer is not less than the end pointer. So, stop.

*/
int reverseArray(int arr[],int start,int end) {
    while(start<end) {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
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
    cout << "Reversed array is: ";
    reverseArray(arr,0,n-1);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}