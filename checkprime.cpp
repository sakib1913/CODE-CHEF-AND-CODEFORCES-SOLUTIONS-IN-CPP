#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the no upto which you want to print prime numbers\n";
cin>>n;
for(int i=2;i<=n;i++)
{
int x=i;
int countt=0;
{ for(int j=1;j<=n;j++)
if(x%j==0)
countt++;
else
countt=countt;
}
if(countt==2)
cout<<x<<" is prime number\n";
else
cout<<x<<" is not a prime number\n";
}
return 0;
}
