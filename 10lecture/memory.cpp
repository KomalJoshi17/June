#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // int *ptr = new int;
    // cout<<ptr<<endl;
    // *ptr = 10;
    // cout<<*ptr<<endl;

    // int *ptr2 = new int(8);
    // cout<<*ptr2<<endl;
    
    // delete ptr;
    // delete ptr2;

    int * const arr = new int[40];
    arr[0] = 10;
    arr[1] = 20;
    cout<<arr<<" "<<*arr;
    cout<<endl;
    cout<<arr[0]<<" "<<arr[1];
    // arr = ptr; can't do this
    // but if arr is not const then it will work
    delete [] arr; //free 40 bytes
    return 0;
}