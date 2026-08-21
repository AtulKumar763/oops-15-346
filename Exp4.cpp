#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Collection {
private:
    vector<string> students;

public:
    void addStudent(const string& name) {
        students.push_back(name);
    }

    void display() const {
        cout << "Student Collection:\n";

        // auto and range-based for loop
        for (const auto& student : students) {
            cout << student << endl;
        }
    }

    void displayNumbers() {
        vector<int> marks = {85, 90, 78, 92, 88};

        cout << "\nMarks:\n";

        for (const auto& mark : marks) {
            cout << mark << " ";
        }

        cout << endl;
    }
};

int main() {
    Collection obj;

    obj.addStudent("Atul");
    obj.addStudent("kumar");
    obj.addStudent("Aatul");
    obj.addStudent("raju");

    obj.display();
    obj.displayNumbers();

    return 0;
}