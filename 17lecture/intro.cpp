// procedural programming
// functions becomes useless for the long codes
// maintaining more functions which are dependent on one another is difficult to manage

// object oriented progamming
// CLASS new datatype with the help of existing datatype, it is a blueprint

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student{

// struct yes functions in cpp not in c
// class yes functions
// struct student{ both same
// class by default they are private no one can access them
// struct by default public

    public:
    int roll_number;
    string name;
    int standard;
    char gender;
    string mobile_number;
    char grade;
};

int main(){
    // cin is an object of class >> operators and functional of this operator is defined in class

    student student_1,student_2;
    // student_1 and student_2 are objects of class student
    cin>>student_1.roll_number;
    cin>>student_1.name;
    cin>>student_1.standard;
    cin>>student_1.gender;
    cin>>student_1.mobile_number;
    cin>>student_1.grade;
    cout<<endl;

    cout<<student_1.roll_number;
    cout<<endl;
    cout<<student_1.name;
    cout<<endl;
    cout<<student_1.standard;
    cout<<endl;
    cout<<student_1.gender;
    cout<<endl;
    cout<<student_1.mobile_number;
    cout<<endl;
    cout<<student_1.grade;
    cout<<endl;

    return 0;
}
