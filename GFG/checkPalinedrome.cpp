//Given an integer, write a function that returns true if the given number is palindrome else false.
#include<iostream>
using namespace std;

/*
Iterative method:
Time complexity of this code is O(log(n))
    as we are dividing the number by 10 in each iteration.
Auxiliary space used by this code is O(1)
    as we are using only one variable to store the reverse of the number.
Logic: We can find the reverse of a number by dividing the number by 10 until the number becomes 0.
*/
bool checkPalindrome(int n) {
    int reverse =0;
    int temp=n;
    if(n<10 && n>=0){ return true;} // Single digit numbers are always palindrome
    else if(n<0){return false;} // Negative numbers are not palindrome
    while(temp!=0){
        reverse=(reverse*10)+(temp%10); // Multiply the reverse by 10 and add the last digit of the number
        temp=temp/10;
    }
    return reverse==n; //If the reverse of the number is equal to the number itself, then the number is palindrome
}

int main() {
    cout << "Enter a number" << endl;
    int n;
    cin >>n;
    if(checkPalindrome(n)){
        cout << "This number if a palindrome" << endl;
    } else {
        cout << "This number is not a palindrome" << endl;
    }
    return 0;
}