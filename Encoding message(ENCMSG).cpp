#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cout<<"enter the number of test cases\n";
cin>>t;
while(t--)
{
int n;
cout<<"enter number of chars in a string\n";
cin>>n;
string s;
cout<<"enter string\n";
cin>>s;
//first condition
if(n%2==0)
{
for(int i=0;i<n;i=i+2)
{swap(s[i],s[i+1]);
}
}
else{
for(int i=0;i<n-1;i=i+2)
{swap(s[i],s[i+1]);

}
}
//2nd case
for(int i=0;i<n;i++)
{
char x=s[i];
int index=x-97;
int m=25-index;
m=m+97;
char y=(char)m;
cout<<y;

}
cout<<endl;

}
return 0;
}
