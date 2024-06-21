//Given a natural number n, the task is to print all the divisors of n.
#include<iostream>
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
 int printDivisors(int n) {
    for (int i =1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
 }
 
/*
Efficient Approach:
Time Complexity: O(sqrt(n))
    as we are iterating from 1 to sqrt(n) and checking if n is divisible by i or not.
Auxiliary Space: O(1)
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
    n=100
    1. Iterate from 1 to sqrt(100)=10.
    2. Check if 100 is divisible by 1, 2, ..., 10.
    3. 100 is divisible by 1, 2, 4, 5, 10.
    4. Print 1, 2, 4, 5, 10.
    5. Iterate from 10 to 1.
    6. Check if 100 is divisible by 10, 9, ..., 1.
    7. 100 is divisible by 10, 5, 4, 2, 1.
    8. Print 100/10=10, 100/5=20, 100/4=25, 100/2=50, 100/1=100.
    9. Print 10, 20, 25, 50, 100.
    10. So, divisors of 100 are 1, 2, 4, 5, 10, 20, 25, 50, 100.
    11. Print 1, 2, 4, 5, 10, 20, 25, 50, 100.
*/


int printEffecienctDivisors(int n) {
    int i=1;
    for(i=1;i*i<n;i++) {
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(;i>=1;i--){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Divisors of "<<n<<" are: ";
    printDivisors(n);
    cout<<endl;
    cout<<"Effecient Divisors of "<<n<<" are: ";
    printEffecienctDivisors(n);
    return 0;
}
