#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double num1,num2,result;
	char op;
	int choice;
	do{
	cout<<"\t::Calculator::"<<endl;
	cout<<"1. Addition(+)"<<endl;
	cout<<"2. Subtraction(-)"<<endl;
	cout<<"3. Multiplication(*)"<<endl;
	cout<<"4. Division(/)"<<endl;
	cout<<"5. Modulas(%)"<<endl;
	cout<<"6. Power(^)"<<endl;
	cout<<"7. Exist"<<endl;
	cout<<"Enter your choice=";
	cin>>choice;
	if(choice==1){
		cout<<"Enter the 2 number="<<endl;
	cin>>num1>>num2;
		result=num1+num2;
		cout<<"Result= "<<num1<<" + "<<num2<<" = "<<result<<endl;
	}
	else if(choice==2){
		cout<<"Enter the 2 number="<<endl;
	cin>>num1>>num2;
		result=num1-num2;
		cout<<"Result= "<<num1<<" - "<<num2<<" = "<<result<<endl;
	}
	else if(choice==3){
		cout<<"Enter the 2 number="<<endl;
	cin>>num1>>num2;
		result=num1*num2;
		cout<<"Result= "<<num1<<" * "<<num2<<" = "<<result<<endl;
	}
	else if(choice==4){
		cout<<"Enter the 2 number="<<endl;
	cin>>num1>>num2;
		if(num2!=0){
		result=num1/num2;
		cout<<"Result= "<<num1<<" / "<<num2<<" = "<<result<<endl;
	}else{
		cout<<"Can't Devided by Zero.Due to Math Error"<<endl;
	}
	}
	else if(choice==5){
		cout<<"Enter the 2 number="<<endl;
	cin>>num1>>num2;
		if(num2!=0){
		result=fmod(num1,num2);
		cout<<"Result= "<<num1<<" % "<<num2<<" = "<<result<<endl;
	}else{
		cout<<"Can't divided by Zero .So it is not possible "<<endl;
	}
	}
	else if(choice==6){
		cout<<"Enter the 2 number="<<endl;
	cin>>num1>>num2;
		result=pow(num1,num2);
		cout<<"Result= "<<num1<<" ^ "<<num2<<" = "<<result<<endl;
		}else if(choice==7){
			cout<<" GOOD.BY .And Thank you for using the Calculator"<<endl;
		}else{
		cout<<" This is not Possible please select the invalid Operation"<<endl;
		break;
		}
	}while(choice!=7);
		return 0;
	}
