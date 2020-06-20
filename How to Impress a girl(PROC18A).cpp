#include<iostream>
using namespace std;
int main()
{
int t;//enter the number of test cases
cout<<"enter the number of test cases\n";
cin>>t;
while(t--)
{
int n,k;
cout<<"enter the number of kilometers\n";
cin>>n;
cout<<"enter the kilometers with maximum speed\n";
cin>>k;
int a[n];
cout<<"enter the no. of girls standing on ith kilometer\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int maxx=0;
for(int i=0;i<n-k;i++)
{
int sum=0;
for(int j=i;j<i+k;j++)
{
sum+=a[j];
}
if(maxx<sum)
maxx=sum;
else
maxx=maxx;
}
cout<<maxx<<" \n";
}
return 0;
}

