#include <iostream>
using namespace std;
int main(){
	double payment, additinal_payment,meter,smeter,mpay,spay,npay;
	const double paybymeter(2.75);
	
	cout<<"Enter to how much meter of carpet you want to buy. \n";
	cin>>meter;

	if(meter>10){
	smeter=meter -10;
	meter=meter-smeter;
	payment=meter*paybymeter;
	mpay=smeter*paybymeter;
	npay=mpay*0.15;
	spay=mpay-npay;
	additinal_payment=payment+spay;
	}
	else{
		payment=meter*paybymeter;
	};
	cout<<"payment is: "<<payment<<endl;
	cout<<"because of the discount police we have over ever 10 meter purchase your payment will be:"<<additinal_payment<<endl;
	
}
