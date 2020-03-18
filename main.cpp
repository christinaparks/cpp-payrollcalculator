#include <iostream>
#include <iomanip>
using namespace std;


int main ()

 {
    int hours;
    double rate, gross, tax, net;
    char r;
    
    cout<<"Welcome to Payroll Calculator!"<<endl;
  do
  {
    
    cout << "Enter Hours Worked: ";
    cin >> hours;
    cout <<"Enter Rate of Pay: ";
    cin >> rate;
   
    gross = hours*rate;
    tax=gross*.28;
    net=gross-tax;
  
    cout<<fixed<<setprecision(2)<<endl;
  
    cout<<"Gross Pay is $"<<gross<<endl;
    cout<<"Tax Withheld is $"<<tax<<endl;
    cout<<"Net Pay is $"<<net<<endl;
  
    cout<<"Go Again? Y/N "; cin>>r;
  }
  while (r=='Y'||r=='y');
    cout<<"Thanks for using Payroll Calculator!"<<endl;
    
  return 0;
 }
