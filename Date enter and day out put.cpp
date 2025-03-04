#include<iostream>
using namespace std;
int main()
{
	int day;
	cout<<"Enter the date=";
	cin>>day;
	if(day==6||day==13||day==20||day==27){
		cout<<"Monday"<<endl;
	}
	else if(day==7||day==14||day==21||day==28){
		cout<<"Tuesday"<<endl;
	}
	else if(day==1||day==8||day==15||day==22||day==29){
		cout<<"Wednesday"<<endl;
	}
	else if(day==2||day==9||day==16||day==22||day==30){
		cout<<"Thursday"<<endl;
	}
	else if(day==3||day==10||day==17||day==24||day==31){
		cout<<"Friday"<<endl;
	}
	else if(day==4||day==11||day==18||day==25){
		cout<<"Saturday"<<endl;
	}
	else if(day==5||day==12||day==19||day==26){
		cout<<"Sunday"<<endl;}
	else{
	    cout<<"Invalid days"<<endl;
	}
}
