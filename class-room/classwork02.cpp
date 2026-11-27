#include<iostream>

using namespace std;

class Emp
{
    public:
    Emp(){
        cout<< "Employee Constructor"<<endl;
    }
    ~Emp(){
        cout<< " EMp Dest"
    }
};

class Man : public Emp
{
public:
    Man(){
        cout<< "Manager Constructor"<<endl;
    }
};

class Dir : public Man
{

};

int main(){

return 0;
}