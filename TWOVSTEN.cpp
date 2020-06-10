#include<iostream>
using namespace std;
int main()
{
int t;
cout<<"enter the number of test cases\n";
cin>>t;
while(t--)
{
int x;
cout<<"enter the number\n";
cin>>x;
if(x%10==0)
cout<<" 0";
else if(x%5==0)
cout<<"1"<<endl;
else
cout<<"-1"<<endl;

}
return 0;
}





