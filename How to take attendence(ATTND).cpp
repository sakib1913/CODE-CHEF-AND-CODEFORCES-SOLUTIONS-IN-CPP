#include<iostream>
using namespace std;
int main()
{
int t;
cout<<"enter the number of test cases\n";
cin>>t;
while(t--)
{
int n;
cout<<"enter the number of students\n";
cin>>n;
string f[n];
string l[n];
cout<<"enter the first and last name of students\n";
for(int i=0;i<n;i++)
{
cin>>f[i]>>l[i];
}
int a[n];
for(int i=0;i<n;i++)
{
a[i]=0;
}
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
{
if(f[i]==f[j])
{
a[i]++;
a[j]++;
}
}

}
for(int i=0;i<n;i++)
{
if(a[i]==0)
{
cout<<f[i]<<"\n";
}
else
{
cout<<f[i]<<" "<<l[i]<<"\n";
}
}
}
return 0;
}
