// this is program 3
#include<iostream>
using namespace std;


class Point {
    private:
    int x;
    int y;

    public:
    void input();
    void show();
};
    inline void Point::input() {
        cout<<"enter the value of x : ";
        cin>>x;
        cout<<"enter the value of y : ";
        cin>>y;
    }

  inline  void Point::show() {
        cout<<x<<" "<<y<<endl;
    }

int main(){
Point p1,p2;
p1.input();
p1.show();
p2.input();
p2.show();
return 0;
}