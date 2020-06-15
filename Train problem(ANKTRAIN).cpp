#include<iostream>
using namespace std;
int main()
{
int t;
cout<<"enter the number of test cases\n";
cin>>t;
while(t--)
{int n;
cout<<"enter the number \n";
cin>>n;
int x=n%8;
if(x==0)
cout<<n-1<<" SL\n";
else if(x==7)
cout<<n+1<<" SU\n";
else if(x==1)
cout<<n+3<<" LB\n";
else if(x==4)
cout<<n-3<<" LB\n";
else if(x==2)
cout<<n+3<<"MB\n";
else if(x==5)
cout<<n-3<<" MB\n";
else if(x==3)
cout<<n+3<<" UB\n";
else if(x==6)
cout<<n-3<<" UB\n";

}
return 0;

}
