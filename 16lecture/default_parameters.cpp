#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int increment(int b,int inc_val = 1) {
    b += inc_val;
    return b;
}
int main() {
    int a = 10;
    int ans = increment(a,3);
    cout<<a<<" "<<ans<<endl;
    int ans2 = increment(a);
    cout<<a<<" "<<ans2<<endl;
    return 0;
}