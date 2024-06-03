#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
    
int main(){
    int base;
    cin>>base;

    int exponent;
    cin>>exponent;

    int power=1;
    for(int i=1;i<=exponent;i++){
        power=power*base;
    }
    cout<<power;
    return 0;
}