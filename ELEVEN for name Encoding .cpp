#include<iostream>
#include<cstring>
using namespace std;
int main()
{int a[15]={0};
a[1]=a[0]=a[2]=1;
for(int i=3;i<15;i++)
{
a[i]=a[i-1]+a[i-2];
}
int n;
cout<<"enter the number of chars in name\n";
cin>>n;
int b[n+1];
memset(b,0,sizeof(b));
for(int i=1;i<15;i++)
{
if(a[i]<=n)
{
b[a[i]]=1;
}
}
for(int i=1;i<=n;i++)
{
if(b[i]==1)
{
cout<<"O";
}
else
{
cout<<"o";
}
}
}
