#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;

    for(int number=1;number<=n;number++){
        int factor_sum=0;
        for(int i=1;i<=number-1;i++){
            if(number%i==0){
                factor_sum+=i;
            }
        }
        if(factor_sum==number){
            cout<<number<<" is Perfect"<<endl;
        }
    }
    return 0;
}