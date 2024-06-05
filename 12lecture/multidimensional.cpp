#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }

    // int student_marks[6][5];
    
    // for(int student = 0; student < 6; student++) {
    //     for(int subject = 0; subject < 5; subject++) {
    //         cin>>student_marks[student][subject];
    //     }
    // }
    // for(int student = 0; student < 6; student++) {
    //     for(int subject = 0; subject < 5; subject++) {
    //         cout<<student_marks[student][subject]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}