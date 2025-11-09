// 2169 - Count Operations to Obtain Zero
// Source: https://leetcode.com/problems/count-operations-to-obtain-zero/description/

#include<iostream>
using namespace std;

class Solution {
public:
    int countOperations(int num1, int num2) {
        int count = 0;
        while(num1 > 0 && num2 > 0){
            if(num1 >= num2){
                num1 -= num2;
            } else {
                num2 -= num1;
            }
            count++;
        }
        return count;
    }
};

