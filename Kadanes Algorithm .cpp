#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
cout<<"Enter the size of an array\n";
cin>>n;

vector<int> v;
for(int i=0;i<n;i++)
{
int x;
cin>>x;
v.push_back(x);
}
int mx_sum=v[0];
int s=0;
int mx_end=0;
int start=0;
int endd=0;
for(int i=0;i<n;i++)
{
mx_end+=v[i];
if(mx_sum<mx_end)
{
mx_sum=mx_end;
start=s;
endd=i;
}
if(mx_end<0)
{
mx_end=0;
s=i+1;
}
}
int sum=0;
for(int i=start;i<=endd;i++)
{sum+=v[i];
cout<<v[i]<<" ";
}
cout<<endl;
cout<<sum;
}
