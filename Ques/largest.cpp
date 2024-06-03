#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int largest=0;
    if((n1>n2)&&(n1>n3)){
        largest=n1;
    }else if((n2>n1)&&(n2>n3)){
        largest=n2;
    }else{
        largest=n3;
    }
    cout<<"Largest "<<largest;
    return 0;
}