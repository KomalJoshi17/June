#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int smallest=arr[0];
    int second=arr[0];
    int temp=arr[0];
    for (int i=1;i<=n;i++){
        if(arr[i]<smallest){
            temp=smallest;
            smallest=arr[i];
            second=temp;
        }
    }
    cout<<"Smallest "<<smallest;
    cout<<endl;
    cout<<"Second "<<second;
    return 0;
}