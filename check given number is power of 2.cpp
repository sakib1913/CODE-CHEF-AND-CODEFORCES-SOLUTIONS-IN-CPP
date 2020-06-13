#include<iostream>
using namespace std;
int main()
{int n;
cout<<"enter number";
cin>>n;
int x=n &(n-1);
if(x==0)
{
cout<<"Given number is power of 2";
}
else
{
cout<<"Given number is not the power of 2 ";
}
return 0;
}
