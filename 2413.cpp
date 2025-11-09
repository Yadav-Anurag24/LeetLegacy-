// 2413 - Smallest Even Multiple
// Source: https://leetcode.com/problems/smallest-even-multiple/description/

#include<iostream>
using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n % 2 != 0){
            return n * 2;    
        }

        return n;
    }
};