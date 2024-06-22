//You are given an integer I,find the absolute value of I.
#include<iostream>
#include<cmath>
using namespace std; 
/*
Efficient Approach:
Time Complexity: O(1)
    as we are using abs() function.
Auxiliary Space: O(1)
    as no extra space is used.
Logic:
    1. Return abs(I).
Example how this works:
    I=-5
    1. Return abs(-5)=5.
    2. Return 5.
    I=5
    1. Return abs(5)=5.
    2. Return 5.
*/
int absolute(int I) {
    return abs(I); //abs() function returns the absolute value of the number.
}

int main() {
    cout << "Enter a number" << endl;
    int I;
    cin >> I;
    
    int absoluteValue = absolute(I);
    
    cout << "The absolute value of the number is: " << absoluteValue << endl;
    
    return 0;
}