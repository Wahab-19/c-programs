#include<iostream>
using namespace std;
int main()
{
	int size=7;
	int num[size],sum=0;
	// using for loop
	for(int i=0;i<size;i++){
		cout<<"Enter value for Index["<<i<<"]: ";
		cin>>num[i];
	}
	cout<<"Array elements are::";
	for(int i=0;i<size;i++){
		cout<<num[i]<<" ";
		sum+=num[i];
	}
	cout<<endl;
	cout<<"The sum of elements are:"<<sum<<endl;
	
	return 0;
}
