#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;
    int sum_even=0;
    int sum_odd=0;
    for (int i=1;i<=n;i++){
        if(i%2==0){
            sum_even+=i;
        }else{
            sum_odd+=i;
        }
    }
    cout<<sum_even;
    cout<<endl;
    cout<<sum_odd;
    return 0;
}