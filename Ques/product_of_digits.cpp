#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;

    int product=1;
    for(int i=number;i>0;i/=10){
        int last=i%10;
        product*=last;
    }
    cout<<product;
    return 0;
}