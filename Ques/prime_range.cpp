#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;

    for (int n=1;n<=number;n++){
    int factors=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            factors++;
        }
    }
    if(factors==2){
            cout<<n<<" ";
    }
    }
        cout<<endl;
    return 0;
}