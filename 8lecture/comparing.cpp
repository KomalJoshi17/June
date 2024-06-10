#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    // comparing base addresses that will be different only
    // int ar[5] = {1,2,4,5,6};
    // int br[5] = {1,2,4,5,6};

    // if(ar == br) {
    //     cout<<"Both arrays are same"<<endl;
    // }else {
    //     cout<<"Both arrays are different"<<endl;
    // }

    // int ar[5] = {1,2,4,5,6};
    // // cant do this to initailise br with ar
    // int br[5];
    // br = ar;

// copying
    int ar[5] = {1,2,4,5,6};
    int br[5];
    for(int i = 0; i < 5; i++) {
        br[i] = ar[i];
    }
    
    cout<<br[5+1];
    cout<<endl;
    cout<<ar[1];
    return 0;
}