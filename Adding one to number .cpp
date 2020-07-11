#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
cout<<"enter the number of elements in an array\n";
cin>>n;
vector <int> v;
v.push_back(0);
for(int i=0;i<n;i++)
{
int x;
cin>>x;
v.push_back(x);
}
int k=(int)v.size()-1;
if(v[k]<9)
{
v[k]+=1;

}
else
{
while(v[k]==9)
{v[k]=0;
k=k-1;
}
v[k]+=1;
}


int start_index=0;
for(int i=0;i<(int)v.size();i++)
{
if(v[i]!=0)
{start_index=i;
break;
}
}
for(int i=start_index;i<(int)v.size();i++)
{
cout<<v[i]<<" ";
}

}
