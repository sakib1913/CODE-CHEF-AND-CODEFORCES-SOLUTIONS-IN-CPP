#include<iostream>
using namespace std;
int main()
{
int a[9]={0};
for(int i=0;i<6;i++)
{
int x;
cin>>x;
a[x]++;
}
int leg=0;int leg_v=0;
for(int i=0;i<9;i++)
{
if(a[i]>=4)
{
leg=1;
leg_v=i;
a[i]=a[i]-4;
break;
}
}
int hd=0;int hd_v=0;
for(int i=0;i<9;i++)
{
if(a[i]>=1)
{
hd=1;
hd_v=i;
a[i]=a[i]-1;
break;
}
}

int bd=0;int bd_v=0;
for(int i=0;i<9;i++)
{
if(a[i]>=1)
{
bd=1;
bd_v=i;
a[i]=a[i]-1;
break;
}
}
if(leg==1 && hd==1 && bd==1)
{
if(leg_v!=bd_v && leg_v!=hd_v && bd_v!=hd_v)
cout<<"BEAR\n";
else if(bd_v!=hd_v && (leg_v!=hd_v || leg_v!=bd_v))
cout<<"BEAR\n";
else if(leg_v==hd_v && leg_v==bd_v && bd_v==hd_v)
cout<<"ELEPHANT\n";
else if(leg_v!=hd_v && leg_v!=bd_v && hd_v==bd_v)
cout<<"ELEPHANT";
}
else
{
cout<<"ALIEN\n";
}


}
