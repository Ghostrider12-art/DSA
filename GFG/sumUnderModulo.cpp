//Given two numbers a and b, find the sum of a and b. Since the sum can be very large, find the sum modulo 109+7.
#include<iostream>
using namespace std;
/*
Efficient approach:
Time Complexity: O(1)
    as we are using only one operation.
Auxiliary Space: O(1)
    as no extra space is used.
Logic:
    1. Initialize M as 1000000007.
    2. Find the sum of a and b.
    3. Return the sum modulo M.
Example how this works:
    a=9223372036854775807
    b=9223372036854775807
    1. Initialize M as 1000000007.
    2. Find the sum of a and b.
        sum=9223372036854775807+9223372036854775807=8446744073709551614
    3. Return the sum modulo M.
        sum%M=8446744073709551614%1000000007=444740966.

*/
 long long sumUnderModulo(long long a, long long b)
{
    int M=1000000007;
    return (a%M+b%M)%M;
}

int main() {
    long long a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    long long sum = sumUnderModulo(a, b);
    cout << "Sum under modulo: " << sum << endl;
    
    return 0;
}
