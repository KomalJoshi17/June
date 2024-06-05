#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int a,b;
    cin>>a>>b;

    int d;
    cin>>d;

    int arr[a][b];
    int arr2[b][d];
    int ans[a][d];
    for(int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<b;i++){
        for (int j=0;j<d;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<endl;
    cout<<"first";
    cout<<endl;
    for(int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"second"<<endl;
    for(int i=0;i<b;i++){
        for (int j=0;j<d;j++){
          cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Multiplication";
    cout<<endl;
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            int sum=0;
            for (int k=0;k<b;k++){
                sum+=arr[i][k]*arr2[k][j];
            }
            ans[i][j]=sum;
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}