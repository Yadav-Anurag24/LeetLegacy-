// Find the square root of the given num, without using the in-built funtions, Hint: Use the binary search application.

#include<iostream>
using namespace std;

class Solution
{ 
    public:
    int sqrt(int x)
    {
        int mid = x/2;
        if (mid*mid==x)
        {
            return mid;
        }
    }
};