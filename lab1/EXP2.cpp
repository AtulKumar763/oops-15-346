// Design a program to convert a procedural implementation of a
// student of a student recode system into an object oriented approch using classes and objects


#include<iostream>
using namespace std;
class TwoStu {
    public:
    string name;
    int roll;
    string branch;

    public:

      void input() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Branch: ";
        cin >> branch;
    }
    void show(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
        cout<<"branch : "<<branch<<endl;
    }
};
int main(){
 TwoStu S1,S2;
 S1.input();
 S1.show();
 S2.input();
 S2.show();
return 0;
}