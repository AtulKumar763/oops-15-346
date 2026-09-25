#include<iostream>
using namespace std;
void callbyvalue(int x){
    x = x + 10;
    cout<<"Inside call by value : "<<x<<endl;
}
void callbyaddress(int *x){
    *x = *x + 10;
    cout<<"Inside call by address : "<<*x<<endl;
}
void callbyReference(int &x){
    x = x + 10;
    cout<<"Inside call by Reference : "<<x<<endl;
}
int main(){
    int a = 10;
    int b = 10;
    int c = 10;

    cout << "Before function calls:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "\nCall by Value:" << endl;
    callbyvalue(a);
    cout << "After function: a = " << a << endl;

    cout << "\nCall by Reference:" << endl;
    callbyReference(b);
    cout << "After function: b = " << b << endl;

    cout << "\nCall by Address:" << endl;
    callbyaddress(&c);
    cout << "After function: c = " << c << endl;

    return 0;

}