// Write a C++ program to print a square star(*) pattern series of N rows.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int n;
//     cin>>n;
//     for (int i=0;i<n;i++){
//         for( int j=0; j<n;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Write a C++ program to print a hollow square star(*) pattern series of N rows.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for( int j=1; j<=n;j++){
//             if(i==1 || i==n || j==1 || j==n){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }   



// Write a C++ program to print a hollow square star pattern with diagonals.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for( int j=1; j<=n;j++){
//             if(i==1 || i==n || j==1 || j==n || i==j || i+j==n+1){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Write a C++ program to print a rhombus star pattern of N rows.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int number;
//     cin>>number;

//     for(int i=1;i<=number;i++){
//         for(int j=1;j<=number-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=number;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Write a C++ program to print the inverted/mirrored rhombus star pattern of N rows.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int number;
//     cin>>number;

//     for(int i=1;i<=number;i++){
//         for(int j=1;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=number;j++){
//             cout<<"*";
//         }
        
//         cout<<endl;
//     }
//     return 0;
// }