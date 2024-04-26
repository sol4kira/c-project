#include <iostream>
using namespace std;
int main(){
	int numb1,numb2,numb3;
	cout<<"Enter your first number: \n";
	cin>>numb1;
	cout<<"Enter your second number: \n";
	cin>>numb2;
	cout<<"Enter your third number: \n";
	cin>>numb3;
	
	if(numb1!=numb2 && numb1!=numb3){
		if(numb1>numb2&&numb2>numb3)
		cout<<"from the highest to lowest by the number you entered "<<numb1<<" "<<numb2<<" "<<numb3<<endl;
		else if(numb1>numb3&&numb3>numb2)
		cout<<"from the highest to lowest by the number you entered "<<numb1<<" "<<numb3<<" "<<numb2<<endl;
		else if(numb2>numb1&&numb1>numb3)
		cout<<"from the highest to lowest by the number you entered "<<numb2<<" "<<numb1<<" "<<numb3<<endl;
		else if(numb2>numb3&&numb3>numb1)
		cout<<"from the highest to lowest by the number you entered "<<numb2<<" "<<numb3<<" "<<numb1<<endl;	
		else if(numb3>numb2&&numb2>numb1)
		cout<<"from the highest to lowest by the number you entered "<<numb3<<" "<<numb2<<" "<<numb1<<endl;
		else if(numb3>numb1&&numb1>numb2)
		cout<<"from the highest to lowest by the number you entered "<<numb3<<" "<<numb1<<" "<<numb2<<endl;	
	}
	else if(numb1!=numb2 && numb2==numb3){
		if(numb1>numb2)
		cout<<"from the highest to lowest by the number you entered "<<numb1<<" "<<numb2<<" "<<numb3<<endl;
		else
		cout<<"from the highest to lowest by the number you entered "<<numb2<<" "<<numb3<<" "<<numb1<<endl;
	}
	else if(numb1==numb2 && numb2!=numb3){
		if(numb1>numb3)
		cout<<"from the highest to lowest by the number you entered "<<numb1<<" "<<numb2<<" "<<numb3<<endl;
		else
		cout<<"from the highest to lowest by the number you entered "<<numb3<<" "<<numb2<<" "<<numb1<<endl;
	}
	else if(numb1!=numb2 && numb1==numb3){
		if(numb1>numb2)
		cout<<"from the highest to lowest by the number you entered "<<numb1<<" "<<numb3<<" "<<numb2<<endl;
		else
		cout<<"from the highest to lowest by the number you entered "<<numb2<<" "<<numb1<<" "<<numb3<<endl;
	}
	else
	cout<<"all the number are equal.";
	return 0;
	
}
