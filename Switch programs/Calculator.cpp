#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double num1,num2,result;
	char op;
	cout<<"::Calculator::"<<endl;
	cout<<"Enter which You want to Calculate"<<endl;
	cin>>num1>>op>>num2;
	switch(op){
		case '+':
			result=num1+num2;
			cout<<"Result= "<<num1<<" + "<<num2<<" = "<<result<<endl;
			break;
		case '-':
			result=num1-num2;
			cout<<"Result= "<<num1<<" - "<<num2<<" = "<<result<<endl;
			break;
		case '*':
			result=num1*num2;
			cout<<"Result= "<<num1<<" * "<<num2<<" = "<<result<<endl;
			break;
		case '/':
			if(num2!=0){
			result=num1/num2;
			cout<<"Result= "<<num1<<" / "<<num2<<" = "<<result<<endl;
		}else{
			cout<<"Can't divided by Zero .Due Math Error"<<endl;
		}
			break;
		case '^':
			result=pow(num1,num2);
			cout<<"Result= "<<num1<<" ^ "<<num2<<" = "<<result<<endl;
			break;
		case '%':
			result=fmod(num1,num2);
			cout<<"Result= "<<num1<<" % "<<num2<<" = "<<result<<endl;
			break;
			default:
				cout<<"Please select the Valid Operator"<<endl;
		}
		return 0;
	}
	
