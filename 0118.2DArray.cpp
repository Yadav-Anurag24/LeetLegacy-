// Pascal's Problem: Given an integer numRows, return the first numRows of Pascal's triangle.
                 //  In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
                 
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle(numRows);
        for(int i=0; i<numRows; i++){

            // Resizing the inner row
            triangle[i].resize(i+1);  

            // Assigning 1 to the first and the last indeces 
            triangle[i][0] = triangle[i][i] = 1;

            for(int j=1; j<i; j++){

        //Doing the sum of two numbers dirctly above the triangle's previous row
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }
        return triangle;
            
    }
};