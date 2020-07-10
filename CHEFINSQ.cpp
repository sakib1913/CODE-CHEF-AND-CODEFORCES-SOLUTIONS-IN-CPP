#include<iostream>
#include<algorithm>
using namespace std;
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int main()
{int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,a+n);
cout<<"\n";
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}

int k;
cout<<"\nenter the k\n";
cin>>k;
int num=a[k-1];
int nis=0;
cout<<num<<" ";  //totalnumberCnumberinsubarray
for(int i=0;i<k;i++)
{
if(a[i]==num)
{
nis++;
}
}
int nit=0;//nitCnis
for(int i=0;i<n;i++)
{
if(a[i]==num)
{
nit++;
}
}
cout<<"\nNCR\n";
cout<<ncr(nit,nis)<<" ";
}
