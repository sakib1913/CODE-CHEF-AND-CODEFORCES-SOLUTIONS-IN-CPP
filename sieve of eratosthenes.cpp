//it is an effecient way to find the prime numbers upto large numbers
//it can handle upto almost 10 million
#include<iostream>
#include<cstring>
using namespace std;
void pr(int n)
{
bool prime[n+1];
memset(prime,true,sizeof(prime));
for(int i=2;i*i<=n;i++)
{if(prime[i]==true){
for(int j=i*i;j<=n;j=j+i)
{
prime[j]=false;
}
}
}
for(int k=2;k<=n;k++)
{if(prime[k]==true)
{
cout<<k<<endl;
}
}
}
int main()
{
int n;
cout<<"enter the numvber\n";
cin>>n;
pr(n);
return 0;
}
