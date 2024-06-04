#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n1;
    int n2;
    cin>>n1>>n2;
    int max=0;
    int lcm=0;
    if(n1>n2){
        max=n1;
    }else{
        max=n2;
    }
    if(max%n1==0 && max%n2==0){
        lcm=max;
    }
    cout<<lcm;
    return 0;
}