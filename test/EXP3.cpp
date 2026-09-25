// write a program to create a class for point hhaving x and y create two method as input and show .
//input method should take value of x and y from keyboard and show
//will print the value of x and y create any object in main and call input and show method respectivily.

#include<iostream>
using namespace std;


class Point {
    private:
    int x;
    int y;

    public:

    void input() {
        cout<<"enter the value of x : ";
        cin>>x;
        cout<<"enter the value of y : ";
        cin>>y;
    }

    void show() {
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
Point p1,p2;
p1.input();
p1.show();
p2.input();
p2.show();
return 0;
}