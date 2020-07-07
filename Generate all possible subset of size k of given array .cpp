#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
int n;
cout<<"enter the sizze of an array\n";
cin>>n;
int k;
cout<<"ENter the size of  sub array\n";
cin>>k;
int a[n];
cout<<"enter the elements of an array\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=1;i<pow(2,n);i++)
{ vector<int> v;

int x=i;
while(x>0)
{
int z=x%2;
v.push_back(z);
x=x/2;
}
int p = n- (int)v.size();
for(int j=1;j<=p;j++)
{
v.push_back(0);
}
reverse(v.begin(),v.end());
int countt=0;
for(int i=0;i<v.size();i++)
{
if(v[i]==1)
 {countt++;
 }
}
if(countt==k)
{
for(int i=0;i<v.size();i++)
{
if(v[i]==1)
{
cout<<a[i]<<" ";
}
}
cout<<endl;
}
v.clear();
}
}
