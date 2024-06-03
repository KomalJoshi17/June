#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;

    switch (number){
        case 1:
        case 2:
        case 3:
        case 5:
        case 7:
        case 11:
        case 13:
            cout<<"Prime";
            break;
        
        case 4:
        case 6:
        case 8:
        case 9:
        case 10:
        case 12:
        case 14:
        case 15:
            cout<<"Composite";
            break;
    
        default:
            cout<<"Invalid";
            break;
    }
    return 0;
}