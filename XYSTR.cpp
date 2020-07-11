#include<iostream>
using namespace std;
int main()
{
string s;
cin>>s;int n=(int)s.size();
int i=0;
int countt=0;
while(i<n)
{
if(s[i]!=s[i+1] && (i+1)<n)
{
countt++;
i+=2;
}
else
{
i++;
}
}
cout<<countt;
}
