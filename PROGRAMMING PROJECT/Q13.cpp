#include<iostream>
using namespace std;
int main(){
	float x1, x2, y1 ,y2, slope, b, x, equationotheline;//'x1,x2,y1,y2 this are intercects of the line
	cout<<"Enter your two x_intercepts (x1 and x2): \n";
	cin>>x1>>x2;
	cout<<"Enter your two y_intercepts (y1 and y2): \n";
	cin>>y1>>y2;
	slope=(y2-y1)/(x2-x1);//to find the slope of the line "m" is slope here
	cout<<"Enter the value of 'x' in your line: \n";
	cin>>x;//this is an independent variable and an input value 
	b=y1-(slope*x1);//calculation for 'b' which is the y-intercept of the line
	equationotheline=(slope*x)+b;//formula for the equation of the line
	cout<<"the slope of the line is "<<slope<<endl
		<<"the equation of the line when the given x("<<x<<")"<< " is "<<equationotheline<<endl;
	return 0;
}
