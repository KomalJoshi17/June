#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // row wise row major 
    int arr[3][2];
    for(int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            cout<<&arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}