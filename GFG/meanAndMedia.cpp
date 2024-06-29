/*
 Given an array a[ ] of size N. The task is to find the median and mean of the array elements.
 Mean is average of the numbers and median is the element which is smaller than half of the 
 elements and greater than remaining half.  If there are odd elements, the median is simply 
 the middle element in the sorted array. If there are even elements, then the median is floor
  of average of two middle numbers in the sorted array. If mean is floating point number, 
  then we need to print floor of it.
*/
#include<iostream>
#include<algorithm> // for sort function
using namespace std;

/*
Efficient approach:
Time complexity: O(nlogn)
      as we are sorting the array.
Auxiliary space: O(1)
        as we are not using any extra space.
Logic:
    1. Sort the array.
    2. If n is odd, then return the middle element.
    3. If n is even, then return the average of two middle elements.
    4. To calculate the mean, calculate the sum of all elements and divide it by n.
    5. Return the mean and median.
Example how this works:
    arr[] = {1, 3, 4, 2, 6, 5, 8, 7}
    1. Sort the array: arr[] = {1, 2, 3, 4, 5, 6, 7, 8}
    2. n = 8, which is even, so the median is (4+5)/2 = 4.5.
    3. mean = (1+2+3+4+5+6+7+8)/8 = 4.
    4. Return mean = 4 and median = 4.5.

*/
int mean(int a[],int n) {
    int temp=0;
    for(int i=0;i<n;i++) {
        temp=a[i]+temp;
    }
    int result=temp/n;
    return result;
}
int median(int a[],int n) {
    std::sort(a,a+n); // sort is a function of the std namespace.
    if(n%2!=0) { return a[n/2];}
    else { return (a[n/2]+a[(n/2)-1])/2;}
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<"Mean of the array is: "<<mean(a,n)<<endl;
    cout<<"Median of the array is: "<<median(a,n)<<endl;
    return 0;
}