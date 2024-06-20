//Given a numnber N, the task is to return the count of digits in this number.
#include <iostream>

using namespace std;

int countDigits(int n) {
if(n=0){
    return 1;
}
  int count = 0;
  while (n != 0) {
    n /= 10;
    count++;
  }
  return count;
}

int main() {
  cout << "Enter the number: ";
  int n;
  cin >> n;
  cout << "The number of digits in the number " << n << " is: " << countDigits(n) << endl;
  return 0;
}
