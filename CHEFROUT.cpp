#include<iostream>
using namespace std;
int main()
{
int t;
cout<<"enter number of test cases \n";
cin>>t;
while(t--)
{
string s;
cout<<"enter string\n";
cin>>s;
int countt=0;
for(int i=0;i<s.size()-1;i++)
{
if(s[i]=='C')
{
if(s[i+1]=='E' || s[i+1]=='S' || s[i+1]=='C')
countt++;
}
else if(s[i]=='E')
{
if(s[i+1]=='S' || s[i+1]=='E')
countt++;
}
if(s[i]=='S')
{
if(s[i+1]=='S')
countt++;
}
}
if(countt==s.size()-1)
cout<<"yes\n";
else
cout<<"no\n";
}
return 0;
}
