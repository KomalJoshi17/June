#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    string str;
    cin>>str;

    int arr[130]={0};
    for (int i=0;i<str.size();i++){
        int ascii_value=str[i];
        arr[ascii_value]++;
    }
    int max_freq=0;
    int index;
    for(int i=0;i<130;i++){
        if(arr[i]>max_freq){
            max_freq=arr[i];
            index=i;
        }
    }
    char max_freq_char=index;
    cout<<max_freq_char<<endl;

    return 0;
}