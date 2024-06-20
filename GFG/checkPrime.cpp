//To check if the number is prime number or not
#include<iostream>
using namespace std;

/*
Efficient approach:
Time complexity of this code is O(sqrt(n))
    as we are checking divisibility of n by numbers of the form 6k+1 and 6k-1.
Auxiliary space used by this code is O(1)
    as we are using only one variable to store the value of i.
Logic: A prime number is a number that is greater than 1 and has no divisors other than 1 and itself.
    We can check if a number n is prime by checking if it is divisible by any number of the form 6k+1 or 6k-1.
    If n is divisible by any of these numbers, then it is not a prime number.
    If n is not divisible by any of these numbers, then it is a prime number.
    For example:
    n=17
    17 is not divisible by 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, or 16.
    So, 17 is a prime number.
    n=15
    15 is divisible by 3 and 5.
    So, 15 is not a prime number.
*/
bool isPrime(long long n) {
    if(n==1){return false;} //1 is not a prime number
    if(n==2 || n==3){return true;} //2 and 3 are prime numbers
    if(n%2==0 || n%3==0){return false;} //If n is divisible by 2 or 3, then it is not a prime number
    for(int i=5;i*i<=n;i+=6){ //Check divisibility of n by numbers of the form 6k+1 and 6k-1
        if(n%i==0 || n%(i+2)==0){return false;} //If n is divisible by any of these numbers, then it is not a prime number
    }
    return true; //If n is not divisible by any of the numbers, then it is a prime number
}

int main() {
    cout << "Enter a number" << endl;
    long long n;
    cin >> n;
    
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    
    return 0;
}