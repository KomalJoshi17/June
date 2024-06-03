#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int r,c;
    cin>>r>>c;

    for (int i=1;i<=r;i++){
        for (int j=i;j<=c+i-1;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}