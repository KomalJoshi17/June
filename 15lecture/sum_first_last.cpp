#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // int number;
    // cin>>number;
    // int first=number;
    // int last=number%10;
    // for(int i=number;i>0;i/=10){
    //     first=i%10;
    // }
    // int res=first+last;
    // cout<<res;

    int number;
    cin>>number;

    string str=to_string(number);
    int n=str.size();
    int sum=str[0]-'0'+str[n-1]-'0';
    cout<<sum;
    return 0;
}