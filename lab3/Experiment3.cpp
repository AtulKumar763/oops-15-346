#include <iostream>
using namespace std;

class Arithmetic {
public:


    inline int add(int a, int b) {
        return a + b;
    }

    // Default argument
    int subtract(int a, int b = 5) {
        return a - b;
    }

    // Function overloading
    int multiply(int a, int b) {
        return a * b;
    }

    double multiply(double a, double b) {
        return a * b;
    }
};

int main() {

    Arithmetic obj;

    cout << "Addition: " << obj.add(10, 20) << endl;

    cout << "Subtraction: " << obj.subtract(20) << endl;

    cout << "Multiplication: " << obj.multiply(5, 4) << endl;

    cout << "Multiplication: " << obj.multiply(2.5, 4.0) << endl;

    return 0;
}