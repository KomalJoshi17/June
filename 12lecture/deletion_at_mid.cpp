#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
int main(){
  int n;
  cin>>n;
  int pos;
  cin>>pos;
  int arr[n];
  for (int i=0;i<n;i++){
    cin>>arr[i];
  }
  if(pos<=0||pos>n){
    cout<<"Inavlid position";
  }else{
    for (int i=pos-1;i<n-1;i++){
      arr[i]=arr[i+1];
    }
    n--;
  }
  for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
