#include<iostream>
using namespace std;
int main()
{
int t;//number of test cases
cout<<"Enter the number of test cases\n";
cin>>t;
while(t--)
{
int n;
cout<<"enter the number of lengths\n";
cin>>n;
int hand[n+1];
int glove[n+1];
cout<<"eneter length of fingers\n";
for(int i=1;i<n+1;i++)
{
cin>>hand[i];
}
cout<<"eneter length of gloves\n";
for(int i=1;i<n+1;i++)
{
cin>>glove[i];
}
int frontt=0;
for(int i=1;i<n+1;i++)
{
if(hand[i]==glove[i])
frontt++;
}
int backk=0;
for(int i=1;i<n+1;i++)
{
if(hand[i]==glove[n+1-i])
backk++;
}
if(frontt==n && backk==n)
cout<<"both\n";
else if(frontt!=n && backk!=n)
cout<<"none\n";
if(frontt==n && backk!=n)
cout<<"front\n";
if(frontt!=n && backk==n)
cout<<"back\n";
}
return 0;
}
