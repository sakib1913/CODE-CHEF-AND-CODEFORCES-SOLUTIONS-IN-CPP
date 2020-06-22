#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enetr the number of candles\n";
cin>>a;
int hour=a;
cout<<"enter b\n";
int b;
cin>>b;
while(a>=b)
{
hour+=(a/b);
a=(a/b)+(a%b);
}
cout<<hour;
return 0;
}
