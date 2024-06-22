//Given an integer N. Find the number of digits that appear in its factorial. 
#include<iostream>
#include<cmath>
using namespace std;

int factorial(long long n) {
 if (n < 0) { return -1; }
if(n==0 || n==1 ) {return 1;}
return n*factorial(n-1); 
}



int digitsInFactorial(int n) {
  if (n < 0) {return 0;   }
  if (n <= 1) {return 1; }

  // Count digits using the property of logarithms (logarithm base 10)
  double digits = 0;
  for (int i = 2; i <= n; i++) {
    digits += log10(i); // Add the number of digits in each factor
  }
  
  // Since log(a * b) = log(a) + log(b), digits represent the sum of digits
  // in the factorial. We need the floor value (integer part) + 1 to 
  // account for the leading digit.
  return floor(digits) + 1;
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    
    int numDigits = digitsInFactorial(n);
    cout << "Number of digits in factorial of " << n << " is: " << numDigits << endl;
    
    return 0;
}


