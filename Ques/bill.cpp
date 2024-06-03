// Write a C++ program to input electricity unit charge and calculate the total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int unit;
    cin>>unit;
    float bill;
    float result;
    if(unit<=50 && unit>0){
        bill=unit*0.50;
    }else if(unit<=150){
        bill=25+(unit-50)*0.75;
    }else if(unit<=250){
        bill=100+(unit-150)*1.20;
    }else{
        bill=220+(unit-250)*1.50;
    }
    result=bill+bill*0.2;
    cout<<result;
    return 0;
}