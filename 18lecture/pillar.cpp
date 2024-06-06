// encapsulation
// binding
// varaibles + methods = class

// polymorphism

// inheritance
// is a relationship
// has a containership

// abstraction

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Vehicle {
    public:
    Vehicle() {
        cout<<"I am the constructor of class Vehicle"<<endl;
    }
    int numWheels;
    string make;
    string model;
    string toString() {
        return make + " -> " + model;
    }
    ~Vehicle() {
         cout<<"I am the destructor of class Vehicle"<<endl;
    }
};

class Car : public Vehicle {
    public:
    Car() {
        cout<<"I am the constructor of class Car"<<endl;
    }
    bool sunroof;
    int airbags;
    int engineCap;
    int topSpeed;
    ~Car() {
        cout<<"I am the destructor of class Car"<<endl;
    }
};

class Truck : public Vehicle {
    public:
    Truck() {
        cout<<"I am the constructor of class Truck"<<endl;
    }
    bool covered;
    int volume;
    int weightCapacity;
    int currentWeight;
    ~Truck() {
        cout<<"I am the destructor of class Truck"<<endl;
    }
};

class Bus : public Vehicle {
    public:
    Bus() {
        cout<<"I am the constructor of class Bus"<<endl;
    }
    bool AC;
    float rating;
    int numSeats;
    int curSeated;
    ~Bus() {
        cout<<"I am the destructor of class Bus"<<endl;
    }
};

int main() {
    Vehicle vehicle;
    
    return 0;
}