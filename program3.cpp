#include<iostream>
using namespace std;

class Point{
    private:
    int x,y;
    //constructor
    public:
    Point(int x,int y){
        this -> x = x;
        this -> y = y;
    }

    void show(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
   Point p1(12,34);
   p1.show();
}