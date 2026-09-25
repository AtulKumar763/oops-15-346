#include<iostream>
using namespace std;
void input(string &name,string &branch,string &section,int &roll,int marks[5]){
cin>>name>>branch>>section;
cin>>roll;
for(int i=0;i<5;i++){
    cin>>marks[i];
   }
}
void findSum(int marks[],int &sum,int &percent){
  for(int i=0;i<5;i++){
    sum += marks[i];
}
percent = float(sum/5.0);

}
void show(string name,string branch,string section,int roll,int marks[5],int sum,float percent){
      cout<<"Name : "<<name<<endl;
      cout<<"Branch : "<<branch<<endl;
      cout<<"secction : "<<section<<endl;
      cout<<"roll : "<<roll<<endl;
        cout<<"marks : "<<" ";
      for(int i=0;i<5;i++){
        cout<<marks[i]<<" ";
      }
      cout<<endl;
    
      cout<<"sum : "<<sum<<endl;
      cout<<"percent : "<<percent<<endl;
}
int main(){
string name,branch,section;
int roll,marks[5];
int sum = 0,percent;
input(name,branch,section,roll,marks);
findSum(marks,sum,percent);
show(name,branch,section,roll,marks,sum,percent);
}