#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int t;
cout<<"enter the number of test cases\n";
cin>>t;
while(t--)
{int n;
cout<<"enter the number of coins\n";
cin>>n;
vector<int> v;
for(int i=0;i<n;i++)
{
int x;
cin>>x;
v.push_back(x);
}
sort(v.begin(),v.end());
vector<int> result;
for(int i=0;i<n-1;i++)
{
result.push_back(v[i+1]-v[i]);
}
sort(result.begin(),result.end());
cout<<result[0];
}
return 0;
}
