#include <iostream>
#include <string>

class StudentData {
private:
    int rollNo;
    std::string name;
    float marks;

public:
    void inputData(int r, std::string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    void printData() const {
        std::cout << "Roll: " << rollNo
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