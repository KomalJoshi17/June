// Write a C++ program to input two numbers from user and find LCM (Lowest Common Multiple).
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int num1,num2;
//     cin>>num1>>num2;

//     int max;
//     int lcm;
//     if(num1>num2){
//         max=num1;
//     }else{
//         max=num2;
//     }
//     if(max%num1==0 && max%num2==0){
//         lcm=max;
//     }
//     cout<<lcm;
//     return 0;
// }


// Write a C++ program to input two numbers from the user and find HCF (Highest Common Factor) / GCD (Greatest Common Divisor).
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int num1,num2;
//     cin>>num1>>num2;
// // 12 = 2 2 3
// // 30 = 2 3 5
// // hcf = 2*3
//     int min=0; 
//     int hcf=0;
//     if(num1>num2){
//         min=num2;
//     }else{
//         min=num1;
//     }
//     for (int i=1;i<min+1;i++){
//         if(num1%i==0 && num2%i==0){
//             hcf=i;
//         }
//     }
//     cout<<hcf;
//     return 0;
// }



// Write a C++ program to input a number from the user and check whether the given number is an Armstrong number or not.
// #include<iostream>
// #include<bits/stdc++.h>
// #include<math.h>
// using namespace std;
    
// int main(){
//     int number;
//     cin>>number;
//     int n=number;
//     int sum=0;
//     while(number!=0){
//         int rem=number%10;
//         sum=sum+rem*rem*rem;
//         number/=10;
//     }
//     if(sum==n){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }
//     return 0;
// }


// Write a C++ program to print all Armstrong numbers between 1 to n where n is the input given by the user.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int number;
//     cin>>number;
//     int sum;
//     int rem;
//     int n;
//     for(int i=1;i<number+1;i++){
//         n=i;
//         sum=0;
//         while(number!=0){
//             rem=number%10;
//             sum=sum+rem*rem*rem;
//             n/=10;
//         }
//         if(i==sum){
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int m, n, sum, digit;
    cin >> m;
    for(int i = 1; i <= m; i++){
        n = i;
        sum = 0;
        while(n != 0){
            digit = n % 10;
            sum = sum + digit * digit * digit;
            n/= 10;
        }
        if(i == sum){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}