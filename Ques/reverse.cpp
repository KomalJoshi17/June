#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;

    int reverse=1;
    for(int i=number;i>0;i/=10){
        reverse=i%10;
        cout<<reverse;
    }
    return 0;
}