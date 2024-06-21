//To print all the prime factors of a number.
#include<iostream>
#include<cmath>
using namespace std;

/*
Naive approach:
Time complexity of this code is O(sqrt(n))
    as we are iterating from 1 to sqrt(n) and checking if n is divisible by i or not.
Auxiliary space used by this code is O(1)
    as no extra space is used.
Logic:
    1. Iterate from 1 to sqrt(n).
    2. Check if n is divisible by i or not.
    3. If divisible then print i.
    4. Repeat the above steps till i*i<n.
    5. Iterate from i to 1.
    6. Check if n is divisible by i or not.
    7. If divisible then print n/i.
    8. Repeat the above steps till i>=1.
Example how this works:
    n=12
    1. Iterate from 1 to sqrt(12)=3.
    2. Check if 12 is divisible by 1, 2, 3.
    3. 12 is divisible by 1, 2, 3.
    4. Print 1, 2, 3.
    5. Iterate from 3 to 1.
    6. Check if 12 is divisible by 3, 2, 1.
    7. 12 is divisible by 3, 2, 1.
    8. Print 12/3=4, 12/2=6, 12/1=12.
    9. Print 4, 6, 12.
    10. So, prime factors of 12 are 1, 2, 3, 4, 6, 12.
    11. Print 1, 2, 3, 4, 6, 12.
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
Logic:
    1. A prime factor of a number is a prime number that divides the number exactly.
    2. To find the prime factors of a number n, we can check divisibility of n by all numbers from 2 to sqrt(n).
    3. If n is divisible by any number i, then i is a prime factor of n.
    4. Repeat the above steps till i*i <= n.
    5. Iterate from i=2 to sqrt(n).
    6. Check if n is divisible by i or not.
    7. If divisible, print i and divide n by i.
    8. Repeat the above steps till i*i <= n.
    9. If n is greater than 1, then n is a prime factor of n.
Example how this works:
    n=12
    1. Iterate from i=2 to sqrt(12)=3.
    2. Check if 12 is divisible by 2, 3.
    3. 12 is divisible by 2, 3.
    4. Print 2, 3.
    5. So, prime factors of 12 are 2, 3.
    6. Print 2, 3.
    n=15
    1. Iterate from i=2 to sqrt(15)=3.
    2. Check if 15 is divisible by 2, 3.
    3. 15 is not divisible by 2.
    4. Check if 15 is divisible by 3.
    5. 15 is divisible by 3.
    6. Print 3.
    7. So, prime factors of 15 are 3.
    8. Print 3.
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