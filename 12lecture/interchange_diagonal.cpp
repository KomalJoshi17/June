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

    cout<<"Interchange";
    cout<<endl;
    for(int i=0;i<r;i++){
        int j=r-i-1;
        int temp=arr[i][i];
        arr[i][i]=arr[i][j];
        arr[i][j]=temp;
        
        // arr[i][i];
        // int j=r-i-1;
        // arr[i][j];
        // swap(arr[i][i],arr[i][j]);
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}