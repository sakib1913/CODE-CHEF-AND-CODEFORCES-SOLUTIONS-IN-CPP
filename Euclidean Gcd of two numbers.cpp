#include<iostream>
using namespace std;
void gcd(int x,int y);
int main()
{int a,b;
cout<<"enter ist number\n";
cin>>a;
cout<<"eneter second number \n";
cin>>b;
if(a>b){
gcd(a,b);}
else
{
gcd(b,a);
}
return 0;
}
void gcd(int x,int y)
{
int z=x-y;
if(z==0)
{
cout<<"Gcd is "<<y;
}
else
{
gcd(y,z);
}
}
