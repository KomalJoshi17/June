#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int a=10;
    int *ptr=&a;
    // cout<<&a; //address
    // cout<<endl;
    // cout<<ptr; //address
    // cout<<endl;
    // cout<<*ptr; //value
    // cout<<endl;

    char ch = 'a';
    // cout<<&ch<<endl;
    char * ptr2 = &ch;
    // cout<<ptr2;

    double d=2.35;
    double *ptr3=&d;
    // cout<<d<<endl<<&d<<endl<<ptr3<<endl<<*ptr3;

    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(ptr2)<<endl;
    // cout<<sizeof(ptr3)<<endl;

    // int a=10;
    // int *ptr=&a;
    int ** ptrPtr = &ptr;
    cout<<*ptrPtr<<endl;
    cout<<**ptrPtr<<endl;
    return 0;
}