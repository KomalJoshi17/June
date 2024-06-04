#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int a,b;
    int temp;
    cin>>a>>b;
    cout<<a<<" "<<b;
    cout<<endl;
    
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
    return 0;
}