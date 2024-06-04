#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int a=10;
    // int *const ptr; // give error
    int *const ptr=&a;
    cout<<*ptr;

    // not work arr++ arr=arr+1
    // will work arr+1 means next address
    // DONE IN STACK
    return 0;
}