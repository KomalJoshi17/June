#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // int a=10;
    // int *ptr_a=&a;
    // int *ptr_b=&a;
    // int *ptr_c;
    // // ptr_c=&a;
    // ptr_c=ptr_b;
    // // ptr_b++; will work
    // cout<<ptr_a<<endl<<ptr_b;
    // cout<<endl;
    // cout<<*ptr_a<<endl<<*ptr_b;
    // cout<<endl;
    // cout<<ptr_c<<endl<<*ptr_c;


    const int a = 10;
    const int *ptr_a = &a;
    const int * const ptr_b = &a;
    // ptr_b++; //not work
    return 0;
}