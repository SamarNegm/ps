#include<iostream>
#include<string>
using namespace std;
struct hoppy
{
    string hoppy_name;
    float how_long;
    string clup;

};
struct student
{
    string name;
    int age;

  hoppy in;
};
int main()
{
 /*
 x.name="samar";
 x.age=19;
 x.in.hoppy_name="basket ball";
 x.in.how_long=3;
 x.in.clup="alahly";
 cout<<x.name<<"\n"<< x.in.hoppy_name<<"\n"<< x.age<<"\n"<< x.in.how_long<<"\n"<< x.in.clup<<"\n";
*/
/*for(int i=0;i<4;i++)
{
student x[i];

cout<<"name : \n";
cin>>x[i].name;
cout<<"age : \n";
cin>> x[i].age;
cout<<"hoppy name : \n";
cin>> x[i].in.hoppy_name;
cout<<"how long : \n";
cin>> x[i].in.how_long;
cout<<"where you play? \n";
cin>> x[i].in.clup;
}
*/


student x;
student *p;
p=&x;

cin>>x.age;


cout<<p->age<<endl;
cout<<x.age<<endl;

cout<<&x<<endl;



 return 0;
}
