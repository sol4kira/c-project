#include <iostream>
using namespace std;
int main(){
	string character,food,movie,gender,haircut;
	cout<<"Enter your gender: ";
	cin>>gender;
	if(gender=="male"){
		cout<<"Are you superhero or supervillain? \n";
		cin>>character;
		if(character=="superhero"){
			cout<<"What do you prefer steak or sushi? \n";
			cin>>food;
			if(food=="steak")
				haircut="flat top";
			else
				haircut="pompadour";}
		else
		haircut="mohawk";
	}
	else{
	cout<<"Are you superhero or supervillain? \n";
	cin>>character;
		if(character=="superhero"){
			cout<<"What do you prefer anime or sticom? \n";
			cin>>movie;
			if(movie=="anime")
				haircut="bangs";
			else
				haircut="bob";}
		else
			haircut="mohawk";
	}
	cout<<"You should get a "<<haircut<<"."<<endl;
	return 0;
}
