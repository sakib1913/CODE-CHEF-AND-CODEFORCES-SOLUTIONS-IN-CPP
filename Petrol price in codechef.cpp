#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the number of bottles\n";
cin>>n;
int k;
cout<<"enter the govt price\n";
cin>>k;
int a[n];
cout<<"enter the different prices\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int gov_c=0;
for(int i=0;i<n;i++)
{
if(a[i]>k)
{
int x=a[i]-k;
gov_c+=x;
}
}
cout<<"Loss"<<gov_c;
}
