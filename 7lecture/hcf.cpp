#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number1,number2;
    cin>>number1>>number2;
    int smaller_number;

    int hcf=1;

    if(number1>number2){
        smaller_number=number2;
    }else{
        smaller_number=number1;
    }

    for (int i=smaller_number;i>=1;i++){
        if(number1%i==0 && number2%i==0){
            hcf=i;
            break;
        }
    }
    cout<<hcf;
    return 0;
}