// Write a C++ program to input a number and check whether the number is a Perfect number or not.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int number;
//     cin>>number;
//     int n=number;
//     int factor=0;
//     for (int i=1;i<number;i++){
//         if(number%i==0){
//             factor+=i;
//         }
//     }
//     if(factor==n){
//             cout<<"Perfect";
//         }else{
//             cout<<"Not Perfect";
//         }
//     return 0;
// }


// Write a C++ program to find all Perfect numbers between 1 to n where n is the input given by the user.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int number;
//     cin>>number;

//     for (int i=1;i<number;i++){
//         int sum=0;
//         for (int j=1;j<i;j++){
//             if(i%j==0){
//                 sum+=j;
//             }
//         }
//         if(sum==i){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }


// Write a C++ program to input a number from the user and check whether the given number is a strong number or not.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int number;
//     cin>>number;
//     int rem;
//     int sum=0;
//     int n=number;
//     while(number!=0){
//         rem=number%10;
//         int mul=1;
//         for (int i=1;i<rem+1;i++){
//             mul=mul*i;
//         }
//         sum+=mul;
//         number/=10;
//     }
//     if(sum==n){
//         cout<<"Strong";
//     }else{
//         cout<<"Not Strong";
//     }
//     return 0;
// }

// Write a C++ program to print all strong numbers between 1 to n where n is the input given by the user.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int number;
    cin>>number;
    for (int i=1;i<=number;i++){
        int n=i;
        int sum=0;
        int num=n;
        while(n>0){
            int rem=n%10;
            int mul=1;
            for (int j=1;j<=rem;j++){
                mul*=j;
            }
            sum+=mul;
            n/=10;
        }
        if(sum==num){
            cout<<num<<" ";
        }
    }
    cout<<endl; 
    return 0;
}