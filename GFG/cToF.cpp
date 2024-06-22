//Given a temperature in celsius C.You need to convert the given temperature to Fahrenheit.
#include<iostream>
using namespace std;

/*
Efficient Approach:
Time Complexity: O(1)
    as we are using a single statement.
Auxiliary Space: O(1)
    as no extra space is used.
Logic:
    1. Return (C*9/5)+32.
Example how this works:
    C=0
    1. Return (0*9/5)+32=32.
    2. Return 32.
    C=100
    1. Return (100*9/5)+32=180+32=212.
    2. Return 212.
*/
double cToF(int C)
{
    return (C*9/5)+32;
}
int main()
{
    cout<<"Enter the temperature in celsius"<<endl;
    int C;
    cin>>C;
    double F = cToF(C);
    cout<<"The temperature in Fahrenheit is: "<<F<<endl;
    return 0;
}