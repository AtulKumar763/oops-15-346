// WRITE A PROGRAM TO STORE DETAILS OF ANY TWO STUDENTS SUCH AS ROLL NUMBER,NAME,BRANCH.TAKE INPUT FROM THE USER  AND SHOW THEIR DETAAILS 

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