#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double num1,num2,result;
	char op;
	int choice;
do{
	cout<<"::Calculator::"<<endl;
	cout<<"1. Addition(+)"<<endl;
	cout<<"2. Subtraction(-)"<<endl;
	cout<<"3. Multiplication(*)"<<endl;
	cout<<"4. Division(/)"<<endl;
	cout<<"5. Modulas(%)"<<endl;
	cout<<"6. Power(^)"<<endl;
	cout<<"7. Exist"<<endl;
	cout<<"Enter your choice=";
	cin>>choice;
	
	
	switch(choice){
		case 1:
			cout<<"Enter the 2 numbers="<<endl;
			cin>>num1>>num2;
			result=num1+num2;
			cout<<"Result= "<<num1<<" + "<<num2<<" = "<<result<<endl;
			break;
		case 2:
			cout<<"Enter the 2 numbers="<<endl;
			cin>>num1>>num2;
			result=num1-num2;
			cout<<"Result= "<<num1<<" - "<<num2<<" = "<<result<<endl;
			break;
		case 3:
			cout<<"Enter the 2 numbers="<<endl;
			cin>>num1>>num2;
			result=num1*num2;
			cout<<"Result= "<<num1<<" * "<<num2<<" = "<<result<<endl;
			break;
		case 4:
			cout<<"Enter the 2 numbers="<<endl;
			cin>>num1>>num2;
			if(num2!=0){
			result=num1/num2;
			cout<<"Result= "<<num1<<" / "<<num2<<" = "<<result<<endl;
		}else{
			cout<<"Can't divided by Zero .Due Math Error"<<endl;
		}
			break;
		case 6:
			cout<<"Enter the 2 numbers="<<endl;
			cin>>num1>>num2;
			result=pow(num1,num2);
			cout<<"Result= "<<num1<<" ^ "<<num2<<" = "<<result<<endl;
			break;
		case 5:
			cout<<"Enter the 2 numbers="<<endl;
			cin>>num1>>num2;
			result=fmod(num1,num2);
			cout<<"Result= "<<num1<<" % "<<num2<<" = "<<result<<endl;
			break;
		case 7:
			cout<<"Thank you For Using The Calculator.Goodby "<<endl;
			default:
				cout<<"Please select the Valid Operator"<<endl;
				break;
		}
	}while(choice!=7);
		return 0;
	}
	
