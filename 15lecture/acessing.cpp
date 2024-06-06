#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    string name;
    cin>>name;
    // cout<<name[0]<<endl;
    // name[0]='R';
    // cout<<name[0]<<endl;

    int length=name.size();
    for(int i=0;i<length;i++){
        cout<<name[i]<<" ";
    }
    cout<<endl;
    return 0;
}