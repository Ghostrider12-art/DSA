//To print all the prime factors of a number.
#include<iostream>
#include<cmath>
using namespace std;

/*
Naive approach:
Time complexity of this code is O(n)
    as we are checking divisibility of n by all numbers from 2 to n-1.
Auxiliary space used by this code is O(1)
    as we are using only one variable to store the value of i.
Logic: A prime factor of a number is a prime number that divides the number exactly.
    To find the prime factors of a number n, we can check divisibility of n by all numbers from 2 to n-1.
    If n is divisible by any number i, then i is a prime factor of n.
    For example:
    n=12
    12 is divisible by 2, 3, 4, 6.
    So, prime factors of 12 are 2, 3.
    n=15
    15 is divisible by 3, 5.
    So, prime factors of 15 are 3, 5.
*/
int primeFactors(int n) {
    while(n%2==0){ //If n is divisible by 2, then 2 is a prime factor of n
        cout << 2 << " ";
        n/=2;
    }
    for(int i=3; i<=std::sqrt(n); i+=2){ /*
    Check divisibility of n by all numbers from 3 to 
    sqrt(n) as n can have at most one prime factor greater
     than sqrt(n).
    */
        while(n%i==0){ //If n is divisible by i, then i is a prime factor of n
            cout << i << " ";
            n/=i;
        }
    }

    if(n>2){ //If n is greater than 2, then n is a prime factor of n
        cout << n << " ";
    }
}

/*
Efficient approach:
Time complexity of this code is O(sqrt(n))
    as we are checking divisibility of n by numbers of the form 6k+1 and 6k-1.
Auxiliary space used by this code is O(1)
    as we are using only one variable to store the value of i.
Logic: A prime factor of a number is a prime number that divides the number exactly.
    To find the prime factors of a number n, we can check divisibility of n by all numbers from 2 to sqrt(n).
    If n is divisible by any number i, then i is a prime factor of n.
    For example:
    n=12
    12 is divisible by 2, 3, 4, 6.
    So, prime factors of 12 are 2, 3.
    n=15
    15 is divisible by 3, 5.
    So, prime factors of 15 are 3, 5.
*/
int efficientPrimeFactors(int n) {
    if(n<=1){return 0;} //If n is less than or equal to 1, then it does not have any prime factors
while(n%2==0) { //If n is divisible by 2, then 2 is a prime factor of n
    cout << 2 << " ";
    n/=2;
}
for(int i=3;i<=std::sqrt(n);i+=2){ /*
Check divisibility of n by all numbers from 3 to
sqrt(n) as n can have at most one prime factor greater
than sqrt(n).
*/
    while(n%i==0){ //If n is divisible by i, then i is a prime factor of n

        cout << i << " ";
        n/=i;
    }
}
if(n>3){ //If n is greater than 3, then n is a prime factor of n
    cout << n << " ";
}
}

int main() {
    cout << "Enter a number" << endl;
    int n;
    cin >> n;
    
    cout << "Prime factors of " << n << " are: ";
    primeFactors(n);
    cout << "\nPrime factors of " << n << " are: ";
    efficientPrimeFactors(n);

    
    return 0;
}