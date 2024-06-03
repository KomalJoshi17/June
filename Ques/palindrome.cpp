#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number1;
    cin>>number1;
    int original=number1;
    int reverse=0;
    for (int i=number1;i>0;i/=10){
        reverse=reverse*10+i%10;
    }
    if(original!=reverse){
        cout<<"Not Palindrome";
    }else{
        cout<<"Palindrome";
    }
    return 0;
}