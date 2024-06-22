//Given an array arr of size N, the task is to find the largest element in the given array.
#include<iostream>
using namespace std;



int largest(int arr[], int n) {  
  int max = arr[0];
  for (int i = 1; i < n; i++) { 
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int max = largest(arr, n);
    cout << "Largest element in the array: " << max << endl;
    
    return 0;
}
        
    