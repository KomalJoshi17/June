#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int a=10;
    string a_string=to_string(a);
    cout<<a_string[0];
    cout<<endl;
    cout<<a_string;
    cout<<endl;
    a_string+="99";
    cout<<a_string;
    cout<<endl;

    int y = stoi(a_string);
    cout<<y<<endl;
    return 0;
}