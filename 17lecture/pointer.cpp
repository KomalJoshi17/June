#include <iostream>
using namespace std;

class Student {
    public:
    int roll_number;
    int standard;
    string mob_number;

};

int main() {
    // instance == object
    Student student_1, student_2; // stack
    Student *ptr = new Student; // heap
    cout<<sizeof(ptr);

    Student arr[100]; //we can also create this
    return 0;
}