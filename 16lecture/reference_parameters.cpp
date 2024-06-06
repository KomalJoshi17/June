// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int a=10;
//     int &b=a; // &b is nickname or reference
//     cout<<b;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int increment(int &b) {
//     return b+1;
// }

// int main() {
//     int a = 10;
//     int ans = increment(a);
//     cout<<a<<" "<<ans;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int increment(int &b) {
//     b++;
//     return b;
// }

// int main() {
//     int a = 10;
//     int ans = increment(a);
//     cout<<a<<" "<<ans;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int increment(int b) {
//     b++;
//     return b;
// }

// int main() {
//     int a = 10;
//     int ans = increment(a);
//     cout<<a<<" "<<ans;
//     return 0;
// }



#include <iostream>
using namespace std;

int increment(int b) {
    return b+1;
}

int main() {
    int a = 10;
    int ans = increment(a);
    cout<<a<<" "<<ans;
    return 0;
}