#include<iostream>
using namespace std;

int main(){
   float salary = 102.0;
float *newsalary = &salary;
*newsalary = *newsalary + (*newsalary * 10/100);
cout<<"salary : "<<salary<<endl;
return 0;
}