#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;
    int factors=1;
    for (int i=1;i<=number;i++){
        if(number%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}