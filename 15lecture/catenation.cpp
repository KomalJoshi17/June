#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    string str1;
    string str2;
    cin>>str1>>str2;

    // string str3;
    // str3=str1+" "+str2;
    // cout<<str3;

    str1 += " ";
    str1 += str2;
    cout<<str1;

    return 0;
}