#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
            // cout<<arr[i][j]<<" ";
            cout<<sum;
        }
    cout<<endl;
    }
    return 0;
}