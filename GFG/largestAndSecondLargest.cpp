//Given an array arr[n] of size N of positive integers which may have duplicates.The task is to find the maximum and second maximum from the array , and both of them should be different from each other, so if no second max exists, then the second max will be -1
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
/*
Efficient approach:
Time complexity: O(n)
      as we are using only one loop to iterate over the array.
Auxiliary space: O(1)
        as we are not using any extra space.
Logic:
    1. Initialize max and max2 as INT_MIN.
    2. Traverse the array from left to right.
    3. If the current element is greater than max, then update max2 as max and max as the current element.
    4. If the current element is greater than max2 and not equal to max, then update max2 as the current element.
    5. If max2 is still INT_MIN, then update it as -1.
    6. Return max and max2. 
Example how this works:
    arr[] = {1, 2, 3, 4, 5}
    1. Initialize max = INT_MIN and max2 = INT_MIN.
    2. For i = 0, arr[i] = 1 < max = INT_MIN, so update max = 1.
    3. For i = 1, arr[i] = 2 > max = 1, so update max2 = max = 1.
    4. For i = 2, arr[i] = 3 > max = 1, so update max2 = 2.
    5. For i = 3, arr[i] = 4 > max = 1, so update max2 = 3.
    6. For i = 4, arr[i] = 5 > max = 1, so update max2 = 4.
    7. Return max = 5 and max2 = 4.
*/
vector<int> largestAndSecondLargest(int sizeOfArray,int arr[]) {
    int max=INT_MIN,max2=INT_MIN;
    for(int i=0;i<sizeOfArray;i++){
        if(arr[i]>max){
            max2=max;
            max=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max){
            max2=arr[i];
        }
    }
    if(max2==INT_MIN){
        max2=-1;
    }
    vector<int> ans;
    ans.push_back(max);
    ans.push_back(max2);
    return ans;

}
