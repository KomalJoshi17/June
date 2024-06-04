#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n1;
    int n2;
    cin>>n1>>n2;
    int min=0;
    int hcf=1;
    if(n1>n2){
        min=n2;
    }else{
        min=n1;
    }
    for (int i=1;i<=min;i++){
        if(n1%i==0 && n2%i==0){
        hcf=i;
        }
    }
    cout<<hcf;
    return 0;
}