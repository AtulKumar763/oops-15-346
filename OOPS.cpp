#include<iostream>
using namespace std;
void student(string name,string branch,int rollnum){
     cout<<name<<" "<<branch<<" "<<rollnum<<" ";
}
void marks(int a,int b,int c,int d,int e){
    int sum = a + b + c + d + e;
    cout<<float(sum/5.0)<<endl;
}
int main(){
    student("atul","cse",346);
    marks(82,79,98,67,96);
    return 0;
}