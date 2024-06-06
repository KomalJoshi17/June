#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int roll_number;
    string name;
    int standard;
    char gender;
    string mob_number;
    char grade;

    public:
    // mimber functions
    void setName() {
        cin>>name;
    }
    void getName() {
        cout<<name;
    }
};

int main(){
    student student_1, student_2;
    student_1.setName();
    student_1.getName();
    return 0;
}