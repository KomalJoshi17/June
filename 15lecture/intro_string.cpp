#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // char in single quotes
    // string in double quotes
    
    // string city;
    // cin>>city;
    // cout<<"City : "<<city;
    // cout<<endl;

    // string name;
    // cin>>name;
    // cout<<"Name : "<<name;
    // cout<<endl;

    // string stream("B Tech"); // constructor type to assign value
    // cout<<"Stream : "<<stream;
    // cout<<endl;

    // string branch;
    // branch="CSE";
    // // branch("CSE") wont work
    // cout<<"Branch : "<<branch;
    // cout<<endl;

    // cout<<city.size();
    // cout<<endl;
    // cout<<name.size();
    // cout<<endl;
    // cout<<stream.size();
    // cout<<endl;
    // cout<<branch.size();
    // cout<<endl;

    // if we gave space between it will compile before space only not after the cpace
    // therefore use getline
    // string para;
    // getline(cin,para);
    // cout<<para;

    // it will take single line but never read after enter statement.
    // not multiple lines

    // whyyy?
    // enter pressing will not allow us to take paragraph
    // string city;
    // cin>>city;
    // cout<<"City : "<<city;
    // cout<<endl;
    
    // string para;
    // getline(cin,para);
    // cout<<para;

    string city;
    cin>>city;
    cout<<"City : "<<city;
    cout<<endl;
    cin.ignore(); // resolved here
    string para;
    getline(cin,para);
    cout<<para;
    return 0;
}