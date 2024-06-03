#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cin>>number;
    int factor=0;

    for (int i=1;i<=15;i++){
        if(number%i==0){
            // cout<<i<<" ";
            factor++;
        }
    }
    if(factor==2){
            cout<<"Prime";
        }else{
            cout<<"Composite";
        }
    return 0;
}