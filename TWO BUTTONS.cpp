#include<iostream>
using namespace std;
int main()
{
int n,m;
cin>>n;
cin>>m;
if(n>=m)
{
cout<<n-m<<endl;
}
else
{
int countt=0;
while(m>n)
{
if(m%2==0)
{
m=m/2;
countt++;

}
else
{
m=m+1;
countt++;

}
}
cout<<(n-m)+countt<<endl;
}


}
