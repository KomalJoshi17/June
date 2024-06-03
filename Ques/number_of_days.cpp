#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int month;
    cin>>month;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "This month has 31 days.";
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << "This month has 30 days.";
            break;

        case 2:
              cout << "This month has 28 days in a non-leap year and 29 days in a leap year";
            break;

        default:
            cout << "Invalid number";
    }
    return 0;
}