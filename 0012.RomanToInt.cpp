// Number to Roman conversion:
#include<iostream>
using namespace std;

class Solution
{
    string roman(int num)
    {
        int numArr[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string result;

        while (num!=0){
            for(int i=0;i<13;i++)
            {
                if (num>=numArr[i])
                {
                    result+=roman[i];
                    num-=numArr[i];
                }

            }

        }
        return result;
    }
   
};