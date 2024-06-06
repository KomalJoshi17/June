#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sum(int a,int b){
    int s=a+b;
    cout<<s;
} 

int sum1(int a,int b){
    int s=a+b;
    cout<<s;
    return 1;
} 

int main(){
    int num1,num2;
    cin>>num1>>num2;

    sum(num1,num2);
    cout<<endl;
    sum1(num1,num2);
    return 0;
}