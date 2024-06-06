#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int increment(int *ptr) {
    (*ptr)++;
    return (*ptr);
}
int main() {
    int a = 10;
    int ans = increment(&a);
    cout<<a<<" "<<ans;
    return 0;
}