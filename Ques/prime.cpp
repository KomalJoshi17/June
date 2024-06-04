#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;
    int factor=0;
    for (int i=1;i<=number;i++){
        if(number%i==0){
            factor++;
        }
    }
    if(factor==2){
            cout<<"Prime";
        }else{
            cout<<"Not Prime";
        }
    return 0;
}