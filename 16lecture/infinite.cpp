// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void func(){
//     cout<<"Hello";
//     func();//recursion
// }    
// int main(){
//     func();
//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void f1();
    
int main(){
    cout<<"main";
    f1();
    return 0;
}

void f1(){
    cout<<"f1";
    main();
}
