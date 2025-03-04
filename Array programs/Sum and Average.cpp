#include<iostream>
using namespace std;
int main()
{
	int size=5;
	int num[size];
	int sum=0,average;
	for(int i=0;i<size;i++){
		cout<<"Enter the Index["<<i<<"]::";
		cin>>num[i];
	}
	for(int i=0;i<size;i++){
		cout<<"Your Number you enter is["<<i<<"]=";
		cout<<num[i];
		sum+=num[i];
		average=sum/2;
	}
	cout<<"The sum of the Index number="<<sum<<endl;
	cout<<"The Average of the number is="<<average<<endl;
}
