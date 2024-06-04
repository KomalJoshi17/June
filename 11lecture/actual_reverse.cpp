#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // int temp[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // for(int i=0;i<n;i++){
    //     temp[n-i-1]=arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<temp[i]<<' ';
    // }   


// NO SWAPING
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // for(int i=0;i<n;i++){
    //     int temp=arr[i];
    //     arr[i]=arr[n-i-1];
    //     arr[n-i-1]=temp;
    // } 
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }


// SWAPING
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    } 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}