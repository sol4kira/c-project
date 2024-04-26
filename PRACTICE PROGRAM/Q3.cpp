#include<iostream>
using namespace std;
int main(){
	float speed, pace,min;
	int sec,answer;
	cout<<"Enter your speed:\n";
	cin>>speed;
	answer=1/speed;
	answer=answer*60;
	answer=answer*10;
	min=answer/10;
	sec=answer%10;
	//pace=time=min:sec
	cout<<"your pace is "<<min<<":"<<sec<<endl;
}
