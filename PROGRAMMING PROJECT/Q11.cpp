#include <iostream>
using namespace std;
int main(){
	int initial_temprature,max_temparure;
	double velocity;
	cout<<"Enter the initioal temprature: \n";
	cin>>initial_temprature;
	cout<<"Enter the final temporature: \n";
	cin>>max_temparure;
	
	while(initial_temprature<=max_temparure){
		velocity=331.3+0.61*initial_temprature;
		cout<<"At "<<initial_temprature<<" degrees Celsius the velocity of sound is "<< velocity<<" m/s"<<endl;
		initial_temprature++;
	}
	return 0;
	
}
