#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    char ch;
    cin>>ch;

    if((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z')){
        cout<<"Alpha";
    }else if((ch>='0')&&(ch<='9')){
        cout<<"Digit";
    }else{
        cout<<"Special";
    }
    return 0;
}