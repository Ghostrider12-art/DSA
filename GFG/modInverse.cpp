//Given two integers ‘a’ and ‘m’. The task is to find the smallest modular multiplicative inverse of ‘a’ under modulo ‘m’. if it does not exist then return -1.
#include<iostream>
using namespace std;

/*
Efficient approach:
Time Complexity: O(m)
    as we are iterating from 1 to m.
Auxiliary Space: O(1)
    as no extra space is used.
Logic:
    1. Iterate from 1 to m.
    2. If (a*i)%m==1 then return i.
    3. Repeat the above steps till i<m.
    4. Return -1.
Example how this works:
    a=3
    m=11
    1. Iterate from 1 to m.
    2. i=1
        1. (3*1)%11=3%11=3!=1.
    3. i=2
        1. (3*2)%11=6%11=6!=1.
    4. i=3
        1. (3*3)%11=9%11=9!=1.
    5. i=4
        1. (3*4)%11=12%11=1.
        2. Return i=4.
*/
int modInverse(int a, int m)
{
    for(int i=1;i<m;i++)
    {
        if((a*i)%m==1)
        {
            return i;
        }
    }
    return -1;
}
int main() {
    int a, m;
    cout << "Enter two numbers: ";
    cin >> a >> m;
    
    int result = modInverse(a, m);
    cout << "Modular multiplicative inverse: " << result << endl;
    
    return 0;
}