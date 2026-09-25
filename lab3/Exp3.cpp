// question 11 
// “Implement a program to demonstrate inline functions, default arguments, and function overloading for performing arithmetic operations.”
#include<iostream>

using namespace std;


class Calculator {
public:
// function overloading & default arguments & inline
inline int add(int a = 0,int b = 0){
    return a + b;
}
inline double add(double a = 0.0,double b = 0.0){
    return a + b;
}
inline int subtract(int a = 0,int b = 0){
    return a - b;
}
inline double subtract(double a = 0.0,double b = 0.0){
    return a - b;
}
inline int multiply(int a = 0,int b = 0){
    return a * b;
}
inline double multiply(double a = 0.0,double b = 0.0){
    return a * b;
}
inline int divide(int a = 0,int b = 1){
    return a / b;
}
inline double divide(double a = 0.0,double b = 1.0){
    return a / b;
}

};

int main(){
 Calculator c; 
 cout<<c.add(10.09,45.0)<<endl;
 cout<<c.subtract(30.9,45.9)<<endl;
 


return 0;
}