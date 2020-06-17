#include<iostream>
using namespace std;
int main()
{
int t;//number of test cases
cout<<"enter the number of test cases\n";
cin>>t;
while(t--)
{string s1,s2;
cout<<"enter string s1\n";
cin>>s1;
cout<<"enter stirng s2\n";
cin>>s2;
int a[3]={0};
for(int i=0;i<3;i++)
{
if(s1[i]=='b' || s2[i]=='b')
a[i]=1;
}
int countt=0;
for(int i=0;i<3;i++)
{
if(a[i]==1)
countt++;
}
if(countt<=1)
{
cout<<"No\n";
}
else if(countt==2)
{
int index;
for(int i=0;i<3;i++)
{
if(a[i]==0)
index=i;
}
if(s1[index]=='o' || s2[index]=='o')
cout<<"yes\n";
else
cout<<"no\n";
}
else if(countt==3)
{int o_count=0;
for(int i=0;i<3;i++)
{if(s1[i]=='o' || s2[i]=='0')
o_count++;
}
if(o_count==0)
cout<<"NO\n";
else
cout<<"yes\n";

}

}
}
