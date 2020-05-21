#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

vector <int> v;
v.push_back(10);
v.push_back(13);
v.push_back(1);
v.push_back(40);
v.push_back(4);
v.push_back(11);
sort(v.begin(),v.end());
int n= v.size();
for(int i=0;i<n;i++)
{
cout<<v[i]<<" ";
}
return 0;
}
