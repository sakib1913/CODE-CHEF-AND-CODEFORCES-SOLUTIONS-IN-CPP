#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int t;
cout<<"enter the  number of test cases\n";
cin>>t;
while(t--)
{
int n;
cout<<"enter the number of strings\n";
cin>>n;
int a[26]={0};
for(int i=0;i<n;i++)
{
string s;
cin>>s;
for(int j=0;j<s.size();j++)
{
int index=s[j]-97;
a[index]++;
}
}
//now we get the total number of chars
vector<int> v;
v.push_back(a[2]/2);//c 2 times
v.push_back(a[14]/1);//o one time
v.push_back(a[3]/1);//d one time
v.push_back(a[4]/2);//e 2 times
v.push_back(a[7]/1);//h one time
v.push_back(a[5]/1);//f one time
sort(v.begin(),v.end());
cout<<v[0]<<endl;
}
}
