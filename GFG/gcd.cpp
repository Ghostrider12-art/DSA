//Find the gcd of two numbers
#include<iostream>
using namespace std;
/*
Recursive method:
Time complexity of this code is O(n)
    as we are calling the function n times.
Auxiliary space used by this code is O(n)

*/
int recursiveGCD(long long a,long long b){
    if(a==0){return b;} //If a is 0, then gcd is b
    if(b==0){return a;}//If b is 0, then gcd is a
    if(a==b){return a;}//Base case as gcd of a number with itself is the number itself
    if(a>b){return recursiveGCD(a-b,b);} /*If a is greater than b,
     then gcd of a and b is same as gcd of a-b and b*/
    return recursiveGCD(a,b-a); /*If b is greater than a,
     then gcd of a and b is same as gcd of a and b-a*/
}
/*
Euclidean algorithm:
Time complexity of this code is O(log(min(a,b)))
    as the algorithm reduces the problem size by a factor of 2 in each iteration.
Auxiliary space used by this code is O(1)
    as we are using only three variables to store the values of a, b, and a%b.
Logic: The Euclidean algorithm is an efficient way to find the GCD of two numbers.
    The algorithm states that the GCD of two numbers a and b is the same as the GCD of b and a%b.
    We continue this process until b becomes 0.
    The GCD of a and b is the value of a when b becomes 0.
    For example:
    a=48, b=18
    48%18=12
    18%12=6
    12%6=0
    So, the GCD of 48 and 18 is 6.
*/
int euclideanGCD(long long a,long long b){
   
    return b==0?a:euclideanGCD(b,a%b); /*If b is 0, then gcd is a,
     else gcd of a and b is same as gcd of b and a%b*/
}
int main() {
    cout << "Enter two numbers" << endl;
    long long a,b;
    cin >> a>>b;
    
    long long recursive_gcd = recursiveGCD(a,b);
    long long euclidean_gcd = euclideanGCD(a,b);
    
    if (recursive_gcd == -1 || euclidean_gcd == -1) {
        cout << "GCD is not defined for negative numbers." << endl;
    } else {
        cout << "The GCD of the numbers is: " << recursive_gcd << endl;
        cout << "The GCD of the numbers using Euclidean algorithm is: " << euclidean_gcd << endl;
    }
    
    return 0;
}
