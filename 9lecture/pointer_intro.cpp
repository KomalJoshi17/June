#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int arr[]={1,2,3};
    cout<<arr; //can't make changes because this is address
    cout<<endl;
    cout<<*(arr);
    // dereference and make changes because it is value
    *(arr)+=5;
    cout<<endl;
    cout<<*(arr);

    cout<<endl;
    cout<<*(arr+1);

    // int brr[3];
    // brr=arr;
    // invalid array assignment

    //  not possible
    // arr++
    // cout<<*(arr++);
    return 0;
}