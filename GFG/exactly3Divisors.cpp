//Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.
#include<iostream>
using namespace std;

/*
Naive approach:
Time Complexity: O(N^2)
    as we are checking divisors for each number from 1 to N.
Auxiliary Space: O(1)
    as no extra space is used.
Logic:
    1. Initialize count as 0.
    2. Iterate from 1 to N.
    3. Initialize divisorCount as 0.
    4. Iterate from 1 to i.
    5. If i is divisible by j then increment divisorCount.
    6. If divisorCount is 3 then increment count.
    7. Repeat the above steps till i<N.
    8. Return count.
Example how this works:
   N=6
    1. Initialize count as 0.
    2. i=1
        1. Initialize divisorCount as 0.
        2. j=1
            1. i is divisible by j so increment divisorCount=1.
        3. j=2
            1. i is not divisible by j.
        4. j=3
            1. i is not divisible by j.
        5. j=4
            1. i is not divisible by j.
        6. j=5
            1. i is not divisible by j.
        7. j=6
            1. i is not divisible by j.
        8. divisorCount=1.
        9. Repeat the above steps till i<N.
    3. i=2
        1. Initialize divisorCount as 0.
        2. j=1
            1. i is divisible by j so increment divisorCount=1.
        3. j=2
            1. i is divisible by j so increment divisorCount=2.
        4. j=3
            1. i is not divisible by j.
        5. j=4
            1. i is not divisible by j.
        6. j=5
            1. i is not divisible by j.
        7. j=6
            1. i is not divisible by j.
        8. divisorCount=2.
        9. Repeat the above steps till i<N.
    4. i=3
        1. Initialize divisorCount as 0.
        2. j=1
            1. i is divisible by j so increment divisorCount=1.
        3. j=2
            1. i is not divisible by j.
        4. j=3
            1. i is divisible by j so increment divisorCount=2.
        5. j=4
            1. i is not divisible by j.
        6. j=5
            1. i is not divisible by j.
        7. j=6
            1. i is not divisible by j.
        8. divisorCount=2.
        9. Repeat the above steps till i<N.
    5. i=4
        1. Initialize divisorCount as 0.
        2. j=1
            1. i is divisible by j so increment divisorCount=1.
        3. j=2
            1. i is divisible by j so increment divisorCount=2.
        4. j=3
            1. i is not divisible by j.
        5. j=4
            1. i is divisible by j so increment divisorCount=3.
        6. j=5
            1. i is not divisible by j.
        7. j=6
            1. i is not divisible by j.
        8. divisorCount=3.
        9. Repeat the above steps till i<N.
    6. i=5
        1. Initialize divisorCount as 0.
        2. j=1
            1. i is divisible by j so increment divisorCount=1.
        3. j=2
            1. i is not divisible by j.
        4. j=3
            1. i is not divisible by j.
        5. j=4
            1. i is not divisible by j.
        6. j=5
            1. i is divisible by j so increment divisorCount=2.
        7. j=6
            1. i is not divisible by j.
        8. divisorCount=2.
        9. Repeat the above steps till i<N.
    7. i=6
        1. Initialize divisorCount as 0.
        2. j=1
            1. i is divisible by j so increment divisorCount=1.
        3. j=2
            1. i is divisible by j so increment divisorCount=2.
        4. j=3
            1. i is divisible by j so increment divisorCount=3.
        5. j=4
            1. i is not divisible by j.
        6. j=5
            1. i is not divisible by j.
        7. j=6
            1. i is divisible by j so increment divisorCount=4.
        8. divisorCount=4.
        9. Repeat the above steps till i<N.
    8. Return count=1 as only i=4 has divisorCount=3.
*/
int exactly3Divisors(int N) {
  int count = 0;
  for (int i = 1; i <= N; i++) {
    int divisorCount = 0; // Count divisors for current i
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        divisorCount++;
      }
    }
    if (divisorCount == 3) {
      count++;
    }
  }
  return count;
}
/*
Efficient Approach:
Time Complexity: O(sqrt(N)log(log(N)))
    as we are checking divisors for each number from 2 to sqrt(N).
Auxiliary Space: O(1)
    as no extra space is used.
Logic:
    1. Initialize count as 0.
    2. Iterate from 2 to sqrt(N).
    3. Initialize isPrime as true.
    4. Iterate from 2 to sqrt(i).
    5. If i is divisible by j then set isPrime as false and break.
    6. If isPrime is true and i*i<=N then increment count.
    7. Repeat the above steps till i<=sqrt(N).
    8. Return count.
Explain how this works:
    N=6
    1. Initialize count as 0.
    2. i=2
        1. Initialize isPrime as true.
        2. j=2
            1. i is divisible by j so set isPrime as false.
        3. isPrime is false.
        4. Repeat the above steps till i<=sqrt(N).
    3. i=3
        1. Initialize isPrime as true.
        2. j=2
            1. i is not divisible by j.
        3. j=3
            1. i is divisible by j so set isPrime as false.
        4. isPrime is false.
        5. Repeat the above steps till i<=sqrt(N).
    4. i=4
        1. Initialize isPrime as true.
        2. j=2
            1. i is divisible by j so set isPrime as false.
        3. isPrime is false.
        4. Repeat the above steps till i<=sqrt(N).
    5. i=5
        1. Initialize isPrime as true.
        2. j=2
            1. i is not divisible by j.
        3. j=3
            1. i is not divisible by j.
        4. j=4
            1. i is not divisible by j.
        5. j=5
            1. i is divisible by j so set isPrime as false.
        6. isPrime is false.
        7. Repeat the above steps till i<=sqrt(N).
    6. i=6
        1. Initialize isPrime as true.
        2. j=2
            1. i is divisible by j so set isPrime as false.
        3. isPrime is false.
        4. Repeat the above steps till i<=sqrt(N).
    7. Return count=1 as only i=4 has exactly 3 divisors.

*/

int exactlyEfficient3Divisors(int N) {
    int count = 0;
    for (int i = 2; i * i <= N; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && i * i <= N) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "Number of numbers less than or equal to N having exactly 3 divisors: " << exactly3Divisors(N) << endl;
    cout << "Number of numbers less than or equal to N having exactly 3 divisors(Efficient): " << exactlyEfficient3Divisors(N) << endl;
    return 0;
}



        
     

