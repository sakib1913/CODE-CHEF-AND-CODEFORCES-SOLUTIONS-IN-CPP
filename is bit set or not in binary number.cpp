#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter number\n";
cin>>n;
bool a= n & (1<<5);
if(a==true)
cout<<"bit is set";
else
cout<<"bit is not set";
return 0;

}

