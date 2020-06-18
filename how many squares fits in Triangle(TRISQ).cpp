#include<iostream>
using namespace std;
int main()
{
int t;
cout<<"\nenter the nmber of test cases \n";
cin>>t;
while(t--){
int b;
cout<<"enter the base of isosceles triangle\n";
cin>>b;
if(b%2==0)
b=b;
else
b=b-1;
float area;
area=(b*b)/2;
cout<<area;//area of a triangle
int x;
x=(area-b)/4;  //x is equal to the total number of squres
cout<<"total number of squares that can be fit in a traingle\n"<<x;
}
return 0;
}
