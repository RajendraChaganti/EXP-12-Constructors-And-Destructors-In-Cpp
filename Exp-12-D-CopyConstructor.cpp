//Name:-Rajendra Chaganti
//PRN:-24070123150
//div:-B3
//Copy Constructor
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
    // Copy constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
    }
    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};
int main() {
    Student s1(101, "Alice");    // Original object
    Student s2 = s1;             // Copy constructor is called
    cout << "Original Student:\n";
    s1.display();
    cout << "\nCopied Student:\n";
    s2.display();
    return 0;
}
/*
Output:
Original Student:
Roll Number: 101
Name: Alice

Copied Student:
Roll Number: 101
Name: Alice
*/
