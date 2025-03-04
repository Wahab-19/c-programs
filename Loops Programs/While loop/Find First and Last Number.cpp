#include<iostream>
using namespace std;
int main()
{
	int num,lastnum,firstnum;
	cout<<"Enter a Number=";
	cin>>num;
	lastnum=num%10;
	while(num>=10){
		num/=10;
	}
	firstnum=num;
	cout<<"First Digit:"<<firstnum<<endl;
	cout<<"Last Digit:"<<lastnum<<endl;
	return 0;
}
