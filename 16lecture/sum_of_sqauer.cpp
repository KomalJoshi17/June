#include <iostream>
using namespace std;
// STACK
// FILO
// LIFO
int square(int a) {
    int sqr = a * a;
    return sqr;
}
int sum_of_square(int num1,int num2) {
    int sqr_num1 = square(num1);
    int sqr_num2 = square(num2);
    int sum = sqr_num1 + sqr_num2;
    return sum;
}
int main() {
    int num1, num2;
    cin>>num1>>num2;
    int ans = sum_of_square(num1, num2);
    cout<<ans;
    return 0;
}