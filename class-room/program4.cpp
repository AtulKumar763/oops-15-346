#include<iostream>

using namespace std;

class Point{
    private:
    int x,y;
    //constructor
    public:
    Point(): x{0},y{0} {cout<<"default constructor"<<endl;}
    Point(int p,int q) : x{p},y{q} {cout<<"Parameterized constructor"<<endl;}
   //  Point(int x,int y){
   //      this -> x = x;
   //      this -> y = y; }
    void show(){
        cout<<"value : "<<x<<" "<<y<<endl;
    }
    // name less object creation 
   //    Point add(Point p) {
   //      return Point(x + p.x, y + p.y);
   //  }

   //  Point add(Point q){
   //   Point r;
   //   r.x = x + q.x;
   //   r.y = y + q.y;
   //   return r;
   //  }

   Point add(Point p,Point q){
      return Point{q.x + p.x, q.y + p.y} ;
   }

};
int main(){
 Point p1(12,34);
   p1.show();
    Point p2;
   p2.show();
   //
   Point p(3,5),q(45,67);
   q.show();
   p.show();
   // Point r = p.add(q);
   // r.show();

 //  Point r =  r.add(p,q);
   Point r = q;
   q.show();
   r.show();
return 0;
}