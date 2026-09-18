#include<iostream>

using namespace std;


int main(){
 
    float salary = 100.0;
    float &newsalary = salary;
    newsalary = newsalary + (newsalary *  10/100);
    cout<<"salary : "<<salary<<endl;
    cout<<"newsalary : "<<newsalary<<endl;

return 0;
}