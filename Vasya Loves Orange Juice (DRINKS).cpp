#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the number of drinks\n";
cin>>n;
int p[n];
cout<<"enter the percentage of orange juice \n";
for(int i=0;i<n;i++)
{int x;
cin>>x;
x=x*10;//in ml
p[i]=x;}
//now we will find the total orange juice
float total_or=0;
for(int i=0;i<n;i++)
{
total_or+=p[i];
}
double total_juice=n*1000;
double res;
res=(total_or/total_juice)*100;
cout<<res;
}
