//Given a sorted array, the task is to remove the duplicate elements from the array.
#include<iostream>
using namespace std;

int removeDupes(int arr[],int n) {
    int result=1;
    int temp[]={arr[0]};
    for(int i=1;i<n;i++) {
        if(temp[result-1]!=arr[i]) {
            temp[result]=arr[i];
            result++;
        }
    }
    for(int i=0;i<result;i++) {
        arr[i]=temp[i];
    }
    return result;
}

int efficientRemoveDupes(int arr[],int n) {
    int result=1;
    for(int i=1;i<n;i++) {
        if(arr[result-1]!=arr[i]) {
            arr[result]=arr[i];
            result++;
        }
    }
    return result;
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
    int result=removeDupes(arr,n);
    cout << "The array after removing duplicates is: ";
    for(int i=0;i<result;i++) {
        cout << arr[i] << " ";
    }
    int result1=efficientRemoveDupes(arr,n);
    cout << endl << "The array after removing duplicates is: ";
    for(int i=0;i<result1;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}