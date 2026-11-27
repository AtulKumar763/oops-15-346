#include<iostream>
#include <cmath>
using namespace std;

class Currency {
    int rs,ps;
    public:

    Currency(float amt) {
        rs = amt;
        ps = round((amt - rs)*100.0);
    }
    void show(){
       cout<<"Rs. "<<rs<<" and "<<ps<<" Paise"<<endl;
    }
    operator float(){
        return (rs*100 + ps)/100.0;
    }
};

int main(){
    Currency c(125.59);
    c.show();
    float amt = c;
    cout<<"Amount : "<<amt<<endl;
}