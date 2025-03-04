#include<iostream>
using namespace std;
int main()
{
	int weak;
	cout<<"Enter the date=";
	cin>>weak;
	switch(weak){	
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:	
	case 6:
	case 7:	
		cout<<"              Weak 1"<<endl;
	break;
	case 8:
	case 9:
	case 10:
	case 11:
	case 12: 
	case 13: 
	case 14:
		cout<<"               Weak 2"<<endl;
		break;
	case 15:
	case 16: 
	case 17:
	case 18: 
	case 19: 
	case 20: 
	case 21:
		cout<<"               Weak 3"<<endl;
		break;
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
		cout<<"                Weak 4"<<endl;
		break;
		default:
			cout<<"This is not valid date of weak"<<endl;
			break;
}
	switch(weak){
	case 6:
	case 13:
	case 20:
	case 27:
		cout<<"               Monday";
	break;
	case 7:
	case 14:
	case 21:
	case 28:
		cout<<"               Tuesday";
		break;
	case 1:
	case 8:
	case 15:
	case 22:
	case 29:
		cout<<"                Wednesday";
		break;
	case 2:
	case 9:
	case 16:
	case 23:
	case 30:
		cout<<"                Thursday";
	break;
	case 3:
	case 10:
	case 17:
	case 24:
	case 31:
		cout<<"               Friday";
	break;
	case 4:
	case 11:
	case 18:
	case 25:
		cout<<"               Saturday";
	break;
	case 5:
	case 12:
	case 19:
	case 26:
		cout<<"               Sunday";
	break;
	defult:
	cout<<"This is Invalid date"<<endl;	
}
}
