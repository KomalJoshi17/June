// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     string str;
//     cin>>str;

//     int length=str.size();
//     for (int i=0;i<length;i++){
//         if (str[i]>=65 && str[i]<=90){
//             continue;
//         }else{
//             str[i]=toupper(str[i]);
//         }
//     }
//     cout<<str;
//     return 0;
// }



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    string str;
    cin>>str;

    int length=str.size();
    for (int i=0;i<length;i++){
        if (str[i]>=65 && str[i]<=90){
            str[i]=tolower(str[i]);
        }else{
            continue;
        }
    }
    cout<<str;
    return 0;
}