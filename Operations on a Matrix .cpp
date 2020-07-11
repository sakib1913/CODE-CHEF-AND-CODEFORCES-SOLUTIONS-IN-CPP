#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int m;
cin>>m;
int a[n][m];
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
a[i][j]={0};
}
}

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
//cout<<"enter the number quries\n";
cout<<"enter q\n";
int q;
cin>>q;
while(q--)
{
int x;
cin>>x;
int y;
cin>>y;

for(int j=0;j<m;j++)
{
a[x][j]+=1;
}
for(int i=0;i<n;i++)
{
a[i][y]+=1;
}

}
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
int countt=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
if(a[i][j]%2!=0)
countt++;
}
}
cout<<"njdfu"<<countt;
}
