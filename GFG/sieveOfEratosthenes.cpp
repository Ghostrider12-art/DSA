//Given a number n, print all the prime numbers less than n.It is given that n is a small number.
#include<iostream>
using namespace std;
#include<vector>

/*
Sieve of Eratosthenes:
Time Complexity: O(n*log(log(n)))
    as we are iterating from 2 to n and checking if i is prime or not.
Auxiliary Space: O(n)
    as we are using an extra vector of size n.
Logic:
    1. Create a boolean array prime[] of size n+1 and initialize all the elements of prime[] as true.
    2. Iterate from 2 to sqrt(n).
    3. If prime[i] is true then iterate from i*i to n and make all the elements of prime[] as false which are divisible by i.
    4. Iterate from 2 to n and print all the elements of prime[] which are true.
Example how this works:
    n=100
    1. Create a boolean array prime[] of size 101 and initialize all the elements of prime[] as true.
    2. Iterate from 2 to sqrt(100)=10.
    3. If prime[i] is true then iterate from i*i to 100 and make all the elements of prime[] as false which are divisible by i.
    4. Iterate from 2 to 100 and print all the elements of prime[] which are true.
    5. So, prime numbers less than 100 are 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97.
    6. Print 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97.
*/

// Function to return all prime numbers less than n
vector<int> sieveOfEratosthenes(int n) { 
    vector<bool> prime(n+1, true);
    for(int j=2;j*j<=n;j++){
        if(prime[j]==true) {
            for(int i=j*j;i<=n;i+=j){
                prime[i]=false;
            }
        }
    }
    vector<int> result;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int n ;
    cout << "Enter the number:";
    cin >> n;
    cin>>n;
    vector<int> primes = sieveOfEratosthenes(n);
    for (int prime : primes) {
        cout << prime << " ";
    }
    return 0;
}
