#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    string str1,str2;
    cin>>str1>>str2;

    // if(str1==str2){
    //     cout<<"Same";
    // }else{
    //     cout<<"Different";
    // }

    int flag=1;
    for (int i=0;i<4;i++){ // let 4 length
        if(toupper(str1[i])!=toupper(str2[i])){
            flag=0;
            break;
        }
    }
    cout<<str1.compare(str2); //str1-str2
    return 0;
}