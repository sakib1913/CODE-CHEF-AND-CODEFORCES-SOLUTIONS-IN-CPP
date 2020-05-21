#include<iostream>
using namespace std;
void withdraw(float x,float y);
int main()
{ int x,y;
cout<<"enter withdrawl amount";
cin>>x;
cout<<"\n enetr acount balancer\n";
cin>>y;
int a;
cout<<"enter choice: 1 for withdrawl";
cin>>a;
switch(a)
{
case 1:
    cout<<"withdrawl starts\n";
    if(x%5==0 && x<y){
    withdraw(x,y);}
    else
    {
    cout<<"can't withdraw"<<y;}
    break;
default:
    cout<<"no withdrawl";
    break;
}
return 0;
}
void withdraw(float x,float y)
{
x=x+0.5;
y=y-x;
cout<<"your account balance  "<<y;
}
