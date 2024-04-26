#include <iostream>
using namespace std;
int main(){
	int numb,count, higher, lower;
	cout<<"Enter any number [to stop just enter the number -1]:";
	cin>>numb;
	higher=numb;
	lower=numb;
	while(numb>=0){
		if(numb>=higher)
			higher=numb;
			
		if(numb<=lower)
			lower=numb;
		
		count++;
		cout<<"Enter any number [to stop just enter the number -1]:";
		cin>>numb;
	}
	cout<<"The highest number from the list of numbers you entered is "<<higher<<endl;
	cout<<"the lowest number from the list of numbers you entered is "<<lower<<endl;
	cout<<"The amount of number you entered is "<<count;
	
	return 0;
}
