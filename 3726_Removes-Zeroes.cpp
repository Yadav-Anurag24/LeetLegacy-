// You are given a positive integer n.
// Return the integer obtained by removing all zeros from the decimal representation of n.

#include<iostream>
using namespace std;

long  long removeZeroes(int number){

    string str = to_string(number); 
    string new_str = "";

    for(char ch : str){
        if(ch != '0'){
            new_str.push_back(ch);
        }
    }

    long long ans = stoll(new_str);
    return ans;
}

int main(){
    long long num;
    
    cout<<"Enter the number: "<<endl;
    cin>>num;

    long long ans = removeZeroes(num);
    cout<<"The number after removing the zeroes: "<<ans;

}