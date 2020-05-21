#include<iostream>
using namespace std;
int main()
{int n;
cout<<"enter the number\n ";
cin>>n;
for(int i=0;i<n;i++)
{ int a ,b;
cout<<"enter a\n";
cin>>a;
cout<<"enter b\n";
cin>>b;
int c;
c=(a%b);
cout<<"\n"<<c;
}
return 0;
}
