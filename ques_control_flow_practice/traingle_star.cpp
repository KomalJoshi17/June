// Write a C++ program to print right triangle star pattern (*) pattern of N rows.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Write a C++ program to print hollow right triangle star pattern (*) pattern of N rows.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(i==1||j==i||j==1||i==n){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Write a C++ program to print mirrored right triangle star pattern (*) pattern of N rows.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Write a C++ program to print hollow mirrored right triangle star pattern (*) pattern of N rows.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             if(i==1||j==i||j==1||i==n){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Write a C++ program to print inverted right triangle star pattern (*) pattern of N rows.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            if((i==1)||(j==1)|| (i+j==n+1)){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}