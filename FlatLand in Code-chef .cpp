#include<iostream>
using namespace std;
int main()
{
int a[35]={0};
for(int i=1;i<=35;i++)
{
a[i]=(i*i);
}
int n;
cout<<"enter the number of squares we have\n";
cin>>n;
int countt=0;
while(n!=0)
{
for(int i=1;i<=35;i++)
{
if(a[i]<=n && a[i+1]>n)
{
n=n-a[i];
countt++;
}
}

}
cout<<"Number of squares is "<<countt;
}
