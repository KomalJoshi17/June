#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;

    switch(number){
        case 1:
        cout<<"A";
        break;
        
        case 2:
        cout<<"E";
        break;

        case 3:
        cout<<"I";
        break;

        case 4:
        cout<<"O";
        break;

        case 5:
        cout<<"U";
        break;

        default:
        cout<<"Invalid";
        break;
    }
    return 0;
}