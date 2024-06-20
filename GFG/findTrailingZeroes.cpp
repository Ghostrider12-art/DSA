//Given an integer n , write a function that reutrns the count of trailing zeroes in n!.

#include<iostream>
using namespace std;

/*
Efficient approach:
Time complexity of this code is O(log(n))
    as we are dividing n by 5 in each iteration.
Auxiliary space used by this code is O(1)
    as we are using only one variable to store the count of trailing zeroes.
Logic: The number of trailing zeroes in the factorial of a number is the number of 5s in the prime factorization of the number.
    So, we can find the number of trailing zeroes by dividing the number by 5 and adding the quotient to the count.
    We continue this process until the quotient is greater than 1.
    The count of trailing zeroes is the sum of all the quotients.
For example:
    n=1024
    1024/5=204
    204/5=40
    40/5=8
    8/5=1
    204+40+8+1=253
    So, the number of trailing zeroes in 1024! is 253.
*/
int findTrailingZeroes(int n) {
 
    if(n<0){return -1;} // Base case as factorial is not defined for negative numbers
    int count=0;
    for(int i=5;n/i>=1;i*=5){ //Divide n by 5 in each iteration
    
        count+=n/i;
    }
    return count;
}

int main() {
    cout << "Enter a number" << endl;
    int n;
    cin >> n;
    
    int trailingZeroes = findTrailingZeroes(n);
    
    if (trailingZeroes == -1) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "The number of trailing zeroes in the factorial of the number is: " << trailingZeroes << endl;
    }
    
    return 0;
}
