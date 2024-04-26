#include <iostream>
using namespace std;
int main(){
	char greeting;
	cout<<"hello"<<endl;
	do{
		cout<<"How is your day going? \n";
		cin>>greeting;
		switch(greeting){
			case'y':
				cout<<"Am glad your having a great day.\n";
				break;
			case'Y':
				cout<<"Am glad your having a great day.\n";
				break;
			case'n':
				cout<<"I hope your day gets better soon..\n";
				break;
			case'N':
				cout<<"I hope your day gets better soon..\n";
				break;		
		}
	}
	while(greeting =='y'||greeting=='n'||greeting=='Y'||greeting=='N');{
	cout<<"Dear Instructor Ahmed,\n"
    "I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten fish, which made me turn red and extremely ill.I came down with a fever of "
	"125. Next, my little pet dog must have smelled the remains of the fish on my homework,because he ate it. I am currently rewriting my homework and hope you wil "
	"accept it late.\n"
    "Sincerely,\n"
    "kirubel";
	cout<<"how is your day going?\n";	
	cin>>greeting;
	}


}
