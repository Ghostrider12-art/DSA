//To find the factorial of a number
#include<iostream>
using namespace std;

/*
Recursive method:
Time complexity of this code is O(n)
    as we are calling the function n times.
Auxiliary space used by this code is O(n)
    as the function calls are stored in the function call stack.
Logic: The factorial of a number n is the product of all positive integers less than or equal to n.    
*/
int factorial(long long n) {
 if (n < 0) { return -1; }
if(n==0 || n==1 ) {return 1;} //Base case as 0! and 1! is 1
return n*factorial(n-1);  /*This line recursively multiplies 'n' by the factorial of (n-1),
 effectively calculating the factorial of 'n'.
 It continues until the base case is reached in the factorial function (not shown here),
  typically when n equals 1 or 0.*/ 
}

/*
Iterative method:
Time complexity of this code is O(n)
    as we are iterating from 2 to n.
Auxiliary space used by this code is O(1)    
    as we are using only one variable to store the factorial of the number.
Logic: We can find the factorial of a number by multiplying all positive integers less than or equal to n.

*/
int iterativeFactorial(long long n) {
    if (n < 0) { return -1; }
    if(n==0 || n==1 ) {return 1;} 
    long long fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main() {
  cout << "Enter a number" << endl;
  long long n;
  cin >> n;

  long long recursive_fact = factorial(n);
  long long iterative_fact = iterativeFactorial(n);

  if (recursive_fact == -1 || iterative_fact == -1) {
    cout << "Factorial is not defined for negative numbers." << endl;
  } else {
    cout << "The factorial of the number is: " << recursive_fact << endl;
    cout << "The factorial of the number using iterative method is: " << iterative_fact << endl;
  }

  return 0;
}