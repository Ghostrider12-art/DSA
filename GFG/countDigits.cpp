//Given a numnber N, the task is to return the count of digits in this number.
#include <iostream>
#include <cmath>

using namespace std;

/*
Iterative Method:
Time complexity of this code is O(log(n)) 
as we are dividing the number by 10 in each iteration.
Auxiliary space used by this code is O(1)
 as we are using only one variable to store the count of digits.
Logic: We can find the number of digits in a number by dividing the number by 10 until the number becomes 0.
 In each iteration, we remove the last digit of the number and increment the count of digits.
  The loop will run until the number becomes 0. The count of digits will be the number of iterations of the loop.
  
*/
int countDigits(int n) {
if(n==0){
  return 1; } // Base case: if n=0 then return 1 as 0 has 1 digit
  int count = 0; 
  while (n != 0) { // Loop to count the number of digits
    n /= 10; // Divide the number by 10 to remove the last digit
    count++; // Increment the count
  }
  return count;
} 

/*
Log base method:
Time complexity of this code is O(1)
  as we are using the log10() function which takes O(1) time to compute the number of digits.
Auxiliary space used by this code is O(1)
  as we are using only one variable to store the count of digits.
Logic: We can find the number of digits in a number by taking the log base 10 of the number and adding 1 to it.
Cons: This method only works for positive numbers. It will not work for negative numbers.
*/
int countUsingLog(int n) {
  return floor(log10(n)+1); // log10(n) will give the number of digits in n. For example, log10(1234) = 3.091315
}

int main() {
  cout << "Enter the number: ";
  int n;
  cin >> n;
  cout << "The number of digits in the number " << n << " is: " << countDigits(n) << endl;
  cout << "The number of digits in the number using Log base method " << n << " is: " << countUsingLog(n) << endl;
  return 0;
}
