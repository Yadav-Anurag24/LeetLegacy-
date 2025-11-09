// 3658 - GCD of Odd and Even Sums
// https://leetcode.com/problems/gcd-of-odd-and-even-sums/description/

#include <iostream>
using namespace std;

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = n*n;
        int sumEven = n*(n+1);

        int ans = gcd(sumOdd, sumEven);
        return ans;
        
    }
};
