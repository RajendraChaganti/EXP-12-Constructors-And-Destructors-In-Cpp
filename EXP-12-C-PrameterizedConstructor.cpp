//Name:-Rajendra Chaganti
//PRN:-24070123150
//div:-B3
//Parameterized Constructor
#include<iostream>
using namespace std;
class Student {
    int roll;
    string name;
public:
    // Parameterized constructor
    Student(int r, string n) {
        roll = r;
        name = n;
    }
    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};
int main() {
    // Creating object with parameters
    Student s1(101, "Alice");
    s1.display();
    return 0;
}
/*
Output:
Roll Number: 101
Name: Alice
*/
