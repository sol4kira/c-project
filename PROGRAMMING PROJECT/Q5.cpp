#include <iostream>
using namespace std;
int main(){
	int numofpeople, noofexit,noofentry;
	const int maxofpeople=100;
	
	cout<<"Enter the number of people in the meeting: ";
	cin>>numofpeople;
	while(numofpeople>0 && numofpeople<1000){
		if (numofpeople>maxofpeople){
		noofexit=numofpeople-maxofpeople;
		cout<<"WARNING!!!";
		cout<<"The amount of people in this meeting exieds the fire departments rule.\n";
		cout<<"You should make sure that the people in this meeting are under the maximum range.\n";
		cout<<noofexit<<" must exit from the meeting hall NOW!!\n";
	}	
	else
	{
		noofentry=maxofpeople-numofpeople;
		cout<<"The amount of people in this meeting didn't pass the maximum amount set by the fire department.\n";
		cout<<noofentry<<" more people can join the meeting.\n";
	};
	cout<<"Enter the number of people in the meeting: ";
	cin>>numofpeople;
	}
	return 0;
}
