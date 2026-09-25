#include <iostream>
#include <string>
using namespace std;
class StudentData {
private:
    int rollNo;
    string name;
    float marks;

public:
    void inputData(int r,string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    void printData() const {
        cout << "Roll: " << rollNo
                  << " | Name: " << name
                  << " | Marks: " << marks << "\n";
    }
};

int main() {
    StudentData s1;

    s1.inputData(101, "Atulkumar", 85.5f);
    s1.printData();

    return 0;
}