#include <iostream>
using namespace std;
int main(){
	int exponent(1),given_exponent;
	double base,answer;
	
	cout<<"Enter your base value: \n";
	cin>>base;
	cout<<"Enter your exponent value: \n";
	cin>>given_exponent;
	answer=base;

	if(base==0)cout<<"The Answer Is 1";
	else{
		while(exponent<given_exponent){
			answer=answer*base;
			exponent++;
		}
	cout<<"The Answer Is "<<answer<<endl;
	}
}
