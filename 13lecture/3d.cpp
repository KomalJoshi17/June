#include <iostream>
using namespace std;


int main() {
    int ar[8][10][5];

    int counter = 1;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 10; j++) {
            for(int k = 0; k < 5; k++) {
                ar[i][j][k] = counter;
                counter += 4;
            }
        }
    }
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 10; j++) {
            for(int k = 0; k < 5; k++) {
                cout<<ar[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl<<endl;
    }
    return 0;
}