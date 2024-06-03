#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int s1,s2,s3;
    cin>>s1>>s2>>s3;

    if(s1==s2 && s2==s3){
        cout<<"Equilateral";
    }else if ((s1==s2)||(s1==s3)||(s3==s2)){
        cout<<"Isoceles";
    }else{
        cout<<"Scalene";
    }
    return 0;
}