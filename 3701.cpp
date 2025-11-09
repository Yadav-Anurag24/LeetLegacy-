// 3701. Compute Alternating Sum
// Source: https://leetcode.com/problems/compute-alternating-sum/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        // int evenSum = 0;
        // int oddSum = 0;

        // for(int i = 0; i < nums.size(); i++){
        //     if(i % 2 == 0){
        //         evenSum = evenSum + nums[i];
        //     }
        //     else{
        //         oddSum = oddSum + nums[i];
        //     }
        // }

        // return  evenSum - oddSum;

        int sum = 0;
        for(int i = 0; i < nums.size(); i++){

            if(i % 2 == 0) sum += nums[i];

            else sum -= nums[i];
        }
        return sum;
    }  
};
