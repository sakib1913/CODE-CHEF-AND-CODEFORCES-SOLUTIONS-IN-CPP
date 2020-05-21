#include<iostream>
using namespace std;
int main()
{
int t;
cout<<"enter the number\n";
cin>>t;
for(int i=0;i<t;i++)
{ int a,b,c,d;
cout<<"eneter a"<<"enter b"<<"enter c"<<"enter d";
cin>>a>>b>>c>>d;
if((a==b && c==d) || (a==c && b==d) || (a==d && b==c))
{
cout<<"YES";
}
else
{
cout<<"NO";
}
}
return 0;
}
