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
*/
int euclideanGCD(long long a,long long b){
    if(n<0){return -1;} //Base case as gcd is not defined for negative numbers
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
