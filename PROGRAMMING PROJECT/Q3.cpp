#include <iostream>
using namespace std;
int main(){
	double payment, additinal_payment,meter,smeter,mpay,spay,npay, paybymeter,rate,minlenght;
	
	cout<<"Enter to how much meter of carpet you want to buy. \n";
	cin>>meter;
	cout<<"Enter the minimum rate for a dicount.\n";
	cin>>minlenght;
	cout<<"Enter the payment per meter.\n";
	cin>>paybymeter;
	cout<<"Enter the dicount rate.\n";
	cin>>rate;
	
	
	if(meter>minlenght){
	smeter=meter -minlenght;
	meter=meter-smeter;
	payment=meter*paybymeter;
	mpay=smeter*paybymeter;
	npay=mpay*rate;
	spay=mpay-npay;
	additinal_payment=payment+spay;
	}
	else{
		payment=meter*paybymeter;
	};
	cout<<"payment is: "<<payment<<endl;
	cout<<"because of the discount police we have over ever 10 meter purchase your payment will be:"<<additinal_payment<<endl;
	
}
