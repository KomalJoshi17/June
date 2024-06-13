// Write a C++ program to print Pyramid star( equilateral triangle ) pattern of N rows.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Write a C++ program to print hollow pyramid star pattern (*) pattern of N rows.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             if(j==1 || i==1 || j==2*i-1 || i==n){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Write a C++ program to print inverted Pyramid star pattern for N rows.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*n-(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}