#include<iostream>

using namespace std;
class Complex{
    int real,img;
    public:
    Complex(int r = 0,int i = 0) : real{r},img {i} {}
    void show() {
        cout<<real<<","<<img<<endl;
    }
    // Complex operator+(Complex c){
    //     return Complex(real + c.real,img + c.img);
    //     // int r = this -> real + c.real;
    //     // int r = this -> img + c.img;
    //     // comp t(i,r);
    //     //return t;
    // }
    
    friend Complex operator+(Complex c1,Complex c2);
};

Complex operator+(Complex c1,Complex c2){
    return Complex(c1.real + c2.real,c1.img + c2.img);
}
int main(){
  Complex c1{5,10},c2{10,20},c3;
 // c3 = c1 + c2;
  c1.show();
  c2.show();
  c3 = c1 + c2;  
  c3.show();

return 0;
}