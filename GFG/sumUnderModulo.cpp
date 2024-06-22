//Given two numbers a and b, find the sum of a and b. Since the sum can be very large, find the sum modulo 109+7.
#include<iostream>
using namespace std;
/*

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
