#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int roll_number;
    string name;
    int standard;
    char gender;
    string mob_number;
    char grade;
};

int main(){
    student student_1,student_2;
    cout<<sizeof(student);
    cout<<endl;
    cout<<sizeof(student_1);
    return 0;
}