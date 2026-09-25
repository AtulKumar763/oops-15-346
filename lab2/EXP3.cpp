#include<iostream>

using namespace std;
// function1
    void function1(float &salary){
    salary = salary + (salary * 10/100);
    }
//function2
//function
    void function2(float *salary)
{
    *salary = *salary + (*salary * 10/100);
}
int main(){
    float salary1 = 50000;
    float salary2 = 50000;

    function1(salary1);
    function2(&salary2);

    cout<<"function 1 : "<<salary1<<endl;
    cout<<"function 2 : "<<salary2<<endl;

return 0;
}
