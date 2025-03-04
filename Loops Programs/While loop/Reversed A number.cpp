#include<iostream>
using namespace std;
int main()
{
	int num,reverse=0;
	cout<<"Enter a number=";
	cin>>num;
	if(num==0){
		reverse=0;
	}else{
		while(num!=0){
			int digit=num%10;
			reverse=reverse*10+digit;
			num/=10;
		}
	}
	cout<<"Reversed Number:"<<reverse<<endl;
}
