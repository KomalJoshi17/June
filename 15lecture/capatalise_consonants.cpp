#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    string str;
    cin>>str;

    int length=str.size();
    for (int i=0;i<length;i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ||str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            continue;
        }else{
            str[i]=toupper(str[i]);
            // str[i]=str[i]-32;
        }
    }
    cout<<str;
    return 0;
}