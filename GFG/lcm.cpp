//To find LCM of two numbers
#include<iostream>
using namespace std;

int euclideanGCD(long long a,long long b){
   
    return b==0?a:euclideanGCD(b,a%b); /*If b is 0, then gcd is a,
     else gcd of a and b is same as gcd of b and a%b*/
}
/*
Efficient approach:
Time complexity of this code is O(log(min(a,b)))
    as we are dividing the product of the numbers by their gcd.
Auxiliary space used by this code is O(1)
    as we are using only one variable to store the LCM of the numbers.
Logic: The LCM of two numbers is the product of the numbers divided by their gcd.
*/
int lcm(long long a, long long b){
    return(a/euclideanGCD(a,b))*b; //LCM of two numbers is the product of the numbers divided by their gcd
}

int main() {
    cout << "Enter two numbers" << endl;
    long long a,b;
    cin >> a>>b;
    
    long long lcm_of_numbers = lcm(a,b);
    
    cout << "The LCM of the numbers is: " << lcm_of_numbers << endl;
    
    return 0;
}
