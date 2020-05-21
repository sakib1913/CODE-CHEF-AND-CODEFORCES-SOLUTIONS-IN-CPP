#include<iostream>
using namespace std;
int main()
{ int t;
cin>>t;
for(int g=0;g<t;g++)
{
int n;cin>>n;
int k;cin>>k;
string s;cin>>s;
int cap=0;
int sma=0;
for(int i=0;i<n;i++)
{ char x=s[i];
int p=(int)x;
if(p>=65 && p<=90)
{cap++;
}
else
sma++;
}
//now we have no. of capital and small letters
if(cap==sma)
{
if(k>=cap)
{cout<<"both";
}
else if(k<cap)
{
cout<<"none";
}
else if(cap<sma)
{if(k>=sma)
{cout<<"both";
}
else if(k<cap)
{cout<<"none";
}
else{
cout<<"chef";
}

}
else
{ if(k>=cap)
{cout<<"both";
}
else if(k<sma)
{
cout<<"none";
}
else{
cout<<"brother";
}
}

}

}
return 0;
}
