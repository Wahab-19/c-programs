#include<iostream>
using namespace std;
int main()
{
	int num1[5]={2,3,5,7};
	int num2[5]={6,7,8,9,1};
	int merge[10];
	for(int i=0;i<5;i++){
		merge[i]=num1[i];
	}
	for(int i=0;i<5;i++){
		merge[i+5]=num2[i];
	}
	cout<<"Merge array=";
	for(int i=0;i<10;i++){
		cout<<merge[i]<<" ";
	}
	return 0;
	
}
