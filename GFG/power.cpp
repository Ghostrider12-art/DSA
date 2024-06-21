//Given two integers x and n, write a function to compute x^n.We ,may assume that x and n are small and overflow doesn not happen.
#include<iostream>
#include<cmath>
using namespace std;
/*
Naive approach:
Time complexity of this code is O(n)
    as we are iterating from 0 to n and multiplying x n times.
Auxiliary space used by this code is O(1)
    as no extra space is used.
Logic:
    1. Initialize result as 1.
    2. Iterate from 0 to n.
    3. Multiply result with x.
    4. Repeat the above steps till i<n.
    5. Return result.
Example how this works:
    x=2, n=3
    1. Initialize result as 1.
    2. Multiply result with x=2.
    3. Multiply result with x=4.
    4. Multiply result with x=8.
    5. Return 8.

*/
int power(long long x, long long n) {
    long long result=1;
    for(int i =0;i<n;i++){
        result=result*x;
    }
    return result;
}

/*
Efficient Approach:ṇ
Time Complexity: O(log(n))
    as we are dividing n by 2 in each iteration.
Auxiliary Space: O(log(n))
    as we are using recursion.
Logic:
    1. If n=0 then return 1.
    2. Calculate temp=pow(x,n/2).
    3. If n is even then return temp*temp.
    4. If n is odd then return x*temp*temp.
Example how this works:
    x=18, n=4
    1. Calculate temp=pow(18,4/2)=pow(18,2)=324.
    2. n is even so return 324*324=104976.
    3. Return 104976.
    x=18,n=5
    1. Calculate temp=pow(18,5/2)=pow(18,2)=324.
    2. n is odd so return 18*324*324=1889568.
    3. Return 1889568.

*/
long long efficientPower(long long x, long long n) {
    if(n==0) { return 1;}
    long long temp=pow(x,n/2);
    if (n%2==0){return temp*temp;}
    else {return x*temp*temp;}
}

int main() {
    long long x,n;
    cout << "Enter the number x:";
    cin >> x;
    cout << "Enter the number n:";
    cin >> n;
    cout << "The result of x^n by naive approach is:" << power(x,n) << endl;
    cout << "The result of x^n by efficient approach is:" << efficientPower(x,n) << endl;
    return 0;
}