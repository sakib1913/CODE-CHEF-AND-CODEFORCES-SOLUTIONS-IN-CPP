#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
int t;//number of test cases
cout<<"enter the number of test cases\n";
cin>>t;
while(t--)
{
int n;//numner of races
cout<<"\nenter the number of races\n";
cin>>n;
int a[n];
int b[n];
cout<<"enter the completion times of alice races\n";
for(int i=0;i<n;i++)
{cin>>a[i];
}
cout<<"enter the completion times of bob races\n";

for(int i=0;i<n;i++)
{cin>>b[i];
}
sort(a,a+n);
sort(b,b+n);
int suma=0;
int sumb=0;
for(int i=0;i<n-1;i++)//here we exclude last element because we have to put max element equal to zero
{
suma=suma+a[i];
sumb=sumb+b[i];
}
if(suma==sumb)
{
cout<<"DRAW\n";
}
else if(suma<sumb)
{
cout<<"ALICE\n";
}
else
{
cout<<"BOB\n";
}
}
return 0;
}
