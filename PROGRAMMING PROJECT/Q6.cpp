#include <iostream>
using namespace std;
int main(){ 
    double grossalary, netsallary,socialsecuritytax,federaltax,statetax,uniondues,extarpay,totaltax;
    int dependent,hourworked,extarahour,realhour;

    cout<<"Enter your work hour:\n";
    cin>>hourworked;
    if(hourworked>40)
    {
      extarahour=hourworked-40;
      realhour=hourworked-extarahour;
      grossalary=realhour*16.78;
      extarpay=extarahour*16.78*1.5;
      grossalary=grossalary+extarpay;
    }
    else{
      grossalary=hourworked*16.78;
    } 

    socialsecuritytax=grossalary*0.06;
    federaltax=grossalary*0.14;
    statetax=grossalary*0.05;
    uniondues=10;

    cout<<"Enter the number of the dependent you have:\n";
    cin>>dependent;

    if(dependent>=3)
      totaltax=socialsecuritytax+federaltax+statetax+uniondues+35;
    else{
    totaltax=socialsecuritytax+federaltax+statetax+uniondues;
    }

    netsallary=grossalary-totaltax;
    cout<<"The gross salary is:"<<grossalary<<endl;
    cout<<"the toatl tax is:"<<totaltax<<endl;
    cout<<"The net take-home sallary is:"<<netsallary<<endl;

    return 0;
}