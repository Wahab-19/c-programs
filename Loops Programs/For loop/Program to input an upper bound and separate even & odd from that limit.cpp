#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number=";
	cin>>num;
	for(int i=0;i<=num;i++){
		cout<<i<<" "; 
	}
	cout<<" "<<endl;
	cout<<"::Even Numbers::"<<endl;
	for(int i=0;i<=num;i+=2){
		cout<<i<<" ";
	}
	cout<<" "<<endl;
	cout<<"::Odd Numbers::"<<endl;
	for(int i=1;i<=num;i+=2){
		cout<<i<<" ";
	}
	return 0;
}
