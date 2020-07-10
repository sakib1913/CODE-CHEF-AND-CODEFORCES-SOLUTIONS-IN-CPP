#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the size of a sorted array\n";
cin>>n;
int a[n];
int b[1000]={0};
cout<<"enter the elements of an array\n";
for(int i=0;i<n;i++)
{
int x;
cin>>x;
a[i]=x;
b[x]=i;
}
for(int i=0;i<n;i++)
{
int x=a[i];
int l=b[x];
cout<<n-1-l<<" ";
}
}

