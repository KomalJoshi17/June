#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // hexadecimal address of first element
    // char arr[10];
    // cout<<arr+0;
    // cout<<endl;
    // cout<<arr+1;
    // cout<<endl;
    // cout<<arr+2;

    // int arr[5] = {1,5,3,4,8};
    // // address of index 0
    // cout<<(arr + 0)<<endl;
    // // address of index 1
    // cout<<(arr + 1)<<endl;
    // // address of the index 2
    // cout<<(arr + 2)<<endl;

    int arr[5] = {1,5,3,4,8};
    cout<<(arr + 2)<<endl;
    cout<<arr[2]<<endl;
    cout<<*(arr + 2)<<endl;
    cout<<2[arr]<<endl;
    cout<<*(2 + arr)<<endl;
    return 0;
}