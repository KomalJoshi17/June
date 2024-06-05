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
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Left Diagonal"<<endl;
    for(int i=0;i<r;i++){
        cout<<arr[i][i]<<" ";
    }
    cout<<endl;

    cout<<"Right Diagonal"<<endl;
    for(int i=0;i<r;i++){
        int j=r-i-1;
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    return 0;
}