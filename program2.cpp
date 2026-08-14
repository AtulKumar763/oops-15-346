#include<iostream>
using namespace std;
//call by value
void swap1(int x,int y){
    cout<<"Swapping by value"<<endl;
    cout<<"value before swap"<<endl;
    cout<<"x : "<<x<<","<<"y : "<<y<<endl;
int z;
z = x;
x = y;
y = z;
cout<<"value after swap"<<endl;
cout<<"x : "<<x<<","<<"y : "<<y<<endl;
}

//call by address
void swap2(int *x,int *y){
    cout<<"Swapping by address"<<endl;
    cout<<"value before swap"<<endl;
    cout<<"x : "<<*x<<","<<"y : "<<*y<<endl;
int z;
z = *x;
*x = *y;
*y = z;
cout<<"value after swap"<<endl;
cout<<"x : "<<*x<<","<<"y : "<<*y<<endl;
}

//call by refrence
void swap3(int &x,int &y){
    cout<<"Swapping by refrence"<<endl;
    cout<<"value before swap"<<endl;
    cout<<"x : "<<x<<","<<"y : "<<y<<endl;
int z;
z = x;
x = y;
y = z;
cout<<"value after swap"<<endl;
cout<<"x : "<<x<<","<<"y : "<<y<<endl;
}

int main(){
//call by value,call by address,call by reference
int a,b;
cout<<"Enter value of x,y : ";
cin>>a>>b;
swap1(a,b);
cout<<endl;
cout<<endl;
swap2(&a,&b);
cout<<endl;
cout<<endl;
swap3(a,b);
}