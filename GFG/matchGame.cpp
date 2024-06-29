/*
 Two friends, A and B, are playing the game of matchsticks. In this game, a group of N matchsticks
 is placed on the table. The players can pick any number of matchsticks from 1 to 4 
 (both inclusive) during their chance. The player who takes the last match stick wins the game. 
 If A starts first, how many matchsticks should he pick on his 1st turn such that 
 he is guaranteed to win the game or determine if it's impossible for him to win.
 Return -1 if it's impossible for A to win the game, else return the number of matchsticks
 should he pick on his 1st turn such that he is guaranteed to win.
 Note : Consider both A and B play the game optimally.
*/
#include<iostream>
using namespace std;

/*
Efficient approach:
Time complexity: O(1)
    as we are using only one operation to find the result.
Auxiliary space: O(1)
    as we are not using any extra space.
Logic:
    1. If N is divisible by 5, then it is impossible for A to win the game. So, return -1.
    2. Otherwise, return N%5.
Example how this works:
    N = 10
    1. N is divisible by 5, so return -1.
    N = 11
    1. N is not divisible by 5, so return N%5 = 1.
    2. A should pick 1 matchstick on his 1st turn to win the game.
*/
int matchGame(long long N) {
    if(N%5==0) {
        return -1;
    }
    else {
        return N%5;
    }
}

int main() {
    long long N;
    cout<<"Enter the number of matchsticks: ";
    cin>>N;
    cout<<"The number of matchsticks A should pick on his 1st turn such that he is guaranteed to win the game is: "<<matchGame(N)<<endl;
    return 0;
}