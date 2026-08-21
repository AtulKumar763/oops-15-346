#include <iostream>
using namespace std;
void byValue(int x) {
    x = x + 10;
}


void byReference(int &x) {
    x = x + 10;
}


void byAddress(int *x) {
    *x = *x + 10;
}

int main() {
    int num = 10;

    cout << "Initial Value: " << num << endl;

    
    byValue(num);
    cout << "After Call by Value: " << num << " (Unchanged)" << endl;

    
    byReference(num);
    cout << "After Call by Reference: " << num << " (Changed)" << endl;

    // Call by Address
    byAddress(&num);
    cout << "After Call by Address: " << num << " (Changed)" << endl;

    return 0;
}
