#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
string s;
cout<<"enter the name of employee\n";
cin>>s;
float salary;
cout<<"enter the salary of an employee\n";
cin>>salary;
float month_sales;
cout<<"enter the month sales of an employee\n";
cin>>month_sales;
float x=(15.0/100);
float per = x*month_sales;
float total_salary;
total_salary=per+salary;

cout<<s<<" total salary is  "<<fixed<<setprecision(2)<<total_salary;




}
