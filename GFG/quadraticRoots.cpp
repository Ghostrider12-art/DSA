//Given a quadratic equation in the form of ax^2+bx+c. You need to find the roots of the equation.
//If roots are imaginary then return -1.
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
/*
Efficient Approach:
Time Complexity: O(1)
    as we are using a single statement.
Auxiliary Space: O(1)
    as no extra space is used.
Logic:
    1. Calculate d=b*b-4*a*c.
    2. If d<0 then return -1.
    3. Calculate root1=floor((-b + sqrt(d)) / (2 * a)).
    4. Calculate root2=floor((-b - sqrt(d)) / (2 * a)).
    5. Return max(root1,root2) and min(root1,root2).
Example how this works:
    a=1,b=-2,c=1
    1. Calculate d=(-2)*(-2)-4*1*1=4-4=0.
    2. Calculate root1=floor((-(-2) + sqrt(0)) / (2 * 1))=floor((2+0)/2)=floor(2/2)=1.
    3. Calculate root2=floor((-(-2) - sqrt(0)) / (2 * 1))=floor((2-0)/2)=floor(2/2)=1.
    4. Return 1 and 1.
    5. Return 1 and 1.
    a=1,b=-7,c=12
    1. Calculate d=(-7)*(-7)-4*1*12=49-48=1.
    2. Calculate root1=floor((-(-7) + sqrt(1)) / (2 * 1))=floor((7+1)/2)=floor(8/2)=4.
    3. Calculate root2=floor((-(-7) - sqrt(1)) / (2 * 1))=floor((7-1)/2)=floor(6/2)=3.
    4. Return 4 and 3.

*/
vector<int> quadraticRoots(int a, int b, int c) {
    vector<int> roots;
    int d=b*b-4*a*c;
    if(d<0){
        roots.push_back(-1);
    }
    else{
            int root1 = floor((-b + sqrt(d)) / (2 * a));
            int root2 = floor((-b - sqrt(d)) / (2 * a));
            roots.push_back(max(root1, root2));  // Maximum root first
            roots.push_back(min(root1, root2));
    }
    return roots;
}
int main() {
    cout << "Enter the coefficients of the quadratic equation" << endl;
    int a, b, c;
    cin >> a >> b >> c;
    
    vector<int> roots = quadraticRoots(a, b, c);
    
    if(roots[0] == -1) {
        cout << "Imaginary roots" << endl;
    } else {
        cout << "Roots of the equation are: " << roots[0] << " and " << roots[1] << endl;
    }
    
    return 0;
}


    