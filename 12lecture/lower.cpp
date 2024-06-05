#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
// i=j;
// i+j=n-1
// i>j
// j>i
int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j>i){
                if(arr[i][j]!=0){
                    count++;
                    break;
                }
            }
        }
        if(count==1) break;
    }
    if(count==0){
        cout<<"Yes Lower";
    }else{
        cout<<"No Lower";
    }
    return 0;
}