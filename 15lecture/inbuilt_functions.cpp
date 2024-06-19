#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // string str;
    // cin>>str;

    string str="Mohammad Fraz";

    // length
    cout<<str.size();
    cout<<endl;

    // index 0 to end
    cout<<str.substr();
    cout<<endl;

    // index 7 to end
    cout<<str.substr(6);
    cout<<endl;

    // index 1 to 5
    cout<<str.substr(1,5);
    cout<<endl;

    // erase
    // cout<<str.erase();
    // cout<<endl;

    // cout<<str.erase(8,1);
    // cout<<endl;
    // cout<<str.erase(0,8);
    // cout<<endl;

    // insert 
    cout<<str.insert(4,"Mohammad");
    cout<<endl;
    cout<<str.insert(4," ");
    cout<<endl;
    
    // append
    cout<<str.append("Fraz");
    cout<<endl;
    str+="Fraz";
    cout<<str;
    return 0;
}