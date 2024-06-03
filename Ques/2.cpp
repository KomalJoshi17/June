// Create a program to calculate the sum of integers entered by the user until the user enters 0 or negative integer. Initialise a variable named total with value 0 at the beginning.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int total=0;
    while(true){
        int number;
        cin>>number;
        if(number<=0){
            break;
        }else{
            total+=number;
        }
    }
    cout<<total;
    return 0;
}