#include<iostream>
using namespace std;
int main()
{
    int sum=0,a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    sum=a+b+c+d+e;
    if(sum%5==0&&sum>0)
        cout<<sum/5;
    else
        cout<<-1;


    return 0;
}
