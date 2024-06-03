#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;
    int first,second,third;

    first=0;
    second=1;
    third=0;
    for (int i=1;i<=number-1;i++){
        first=second;
        second=third;
        third=first+second;
        cout<<third<<" ";
    }
    return 0;
}