#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;
    int last;
    int first;
    last=number%10;
    for(int i=number;i>0;i/=10){
        first=i;
    }
    cout<<last+first;
    return 0;
}