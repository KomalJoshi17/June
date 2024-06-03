#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;

    // for (int i=1;i<=n;i++){
    //     int stars=i*2-1;
    //     int spaces=n-i;
    //     for(int j=1;j<=spaces;j++){
    //         cout<<" ";
    // }
    //     for (int j=1;j<=stars;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for (int i=1;i<=n-1;i++){
    //     int stars=(n-i)*2-1;
    //     int spaces=i;
    //     for(int j=1;j<=spaces;j++){
    //         cout<<" ";
    // }
    //     for (int j=1;j<=stars;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    int stars = 1;
    int spaces = n - 1;
    for(int i = 1; i <= 2 * n - 1; i++) {
        
        for(int j = 1; j <= spaces; j++) {
            cout<<" ";
        }
        for(int j = 1; j <= stars; j++) {
            cout<<"*";
        }
        cout<<endl;
        if(i < n) {
            stars += 2;
            spaces--;
            
        } else {
            stars -= 2;
            spaces++;
        }
    }
    return 0;
}