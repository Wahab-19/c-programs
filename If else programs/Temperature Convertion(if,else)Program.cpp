#include<iostream>
using namespace std;
int main()
{
	int choice;
	double temperature,converttemp,convert;
	cout<<"Temperature Converter Menu:"<<endl;
	cout<<"1. Kelvin to Celsius "<<endl;
	cout<<"2. kelvin to Fahrenhiet"<<endl;
	cout<<"3. Celsius to Fahrenhiet"<<endl;
	cout<<"Enter your Choice";
	cin>>choice;
	if(choice==1||choice==2||choice==3){
		cout<<"Enter the temperature in Kelvin: ";
		cin>>temperature;
	}
	if(choice==1){
		converttemp=temperature-273.15;
		cout<<"Temperature in Celsius "<<converttemp<<endl;
	}else if(choice==3){
		converttemp=(temperature-273.15)*9/5+32;
		cout<<"Temperature in Fahrenheit "<<converttemp<<endl;
	}else if(choice==3){
		converttemp=temperature-273.15;
		convert=(converttemp*9/5)+32;
		cout<<"Temperature in Fahrenhiet"<<convert<<endl;
	}else{
		cout<<"This is not valid options"<<endl;
	}
	
}
