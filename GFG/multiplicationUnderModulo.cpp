//Given two numbers a and b, find the product of a and b. Since the sum can be very large, find the sum modulo 109+7.
#include <iostream>
using namespace std;
/*
Efficient approach:
Time Complexity: O(1)
    as we are using only one operation.
Auxiliary Space: O(1)
    as no extra space is used.
Logic:
    1. Initialize MOD as 1000000007.
    2. Find the product of a and b.
    3. Return the product modulo MOD.
Example how this works:
    a=9223372036854775807
    b=9223372036854775807
    1. Initialize MOD as 1000000007.
    2. Find the product of a and b.
        product=9223372036854775807*9223372036854775807=850403524
    3. Return the product modulo MOD.
        product%MOD=850403524%1000000007=850403524.
*/
 int multiplicationUnderModulo(long long a, long long b) {
     const long long MOD = 1000000007;
    long long result = (a % MOD) * (b % MOD) % MOD;
     return static_cast<int>(result);
    }


int main() {
    long long a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    long long product = multiplicationUnderModulo(a, b);
    cout << "Product under modulo: " << product << endl;
    
    return 0;
}
