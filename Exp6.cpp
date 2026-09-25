#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // Default constructor
    Student() {
        rollNo = 0;
        name = "Unknown";
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    Student(int r, string n) {
        rollNo = r;
        name = n;
        cout << "Parameterized constructor called." << endl;
    }
    // value
    // Copy constructor
    Student(const Student& other) {
        rollNo = other.rollNo;
        name = other.name;
        cout << "Copy constructor called." << endl;
    }

    void display() const {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
 
    Student s1;
    s1.display();

   
    Student s2(101, "kumar");
    s2.display();

   
    Student s3(s2);
    s3.display();

    return 0;
}