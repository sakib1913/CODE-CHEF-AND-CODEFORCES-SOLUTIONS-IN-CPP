#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cout<<"enter the number of test cases\n";
cin>>t;
while(t--)
{
int n;
cout<<"enter the number of songs in playlist\n";
cin>>n;
int a[n];
cout<<"enter the length of diff songs in playlist\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int k;
cout<<"enter the position of UNCLE JHONY song's index\n";
cin>>k;
int val=0;
for(int i=0;i<n;i++)
{
if(k==i)
{
cout<<a[i];
val=a[i];
}
}
cout<<"\n";
sort(a,a+n);
for(int i=0;i<n;i++)
{

if(val==a[i])
{
cout<<"UNCLE JHONY IS AT INDEX  "<<i<<endl;}
}

}

}
