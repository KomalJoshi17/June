#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int arr[a][b][c];
    for(int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            for (int k=0;k<c;k++){
                cin>>arr[i][j][k];
            }
        }
    }
    for(int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            for (int k=0;k<c;k++){
                cout<<arr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl<<endl;
    }
    return 0;
}