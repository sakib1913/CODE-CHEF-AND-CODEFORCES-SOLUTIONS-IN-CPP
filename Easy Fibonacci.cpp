#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int t;cin>>t;
while(t--)
{
long long int x;
cin>>x;
long long int z = log2((long double)x);
if(z==0)
cout<<"0"<<endl;
else if(z==1)
cout<<"1"<<endl;
else
{
int a=z%4;
if(a==2)
cout<<"2"<<endl;
else if(a==3)
cout<<"3"<<endl;
else if(a==0)
cout<<"0"<<endl;
else if(a==1)
cout<<"9"<<endl;
}
}
}
