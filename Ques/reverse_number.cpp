#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;
    int rev=0;
    for (int i=number;i>0;i/=10){
        rev=rev*10+i%10;
    }
    cout<<rev;
    return 0;
}
