#include<iostream>
using namespace std;
int main()
{
	int num[5]={23,25,27,34,50};
	int max=num[0];
	cout<<" Elements are::";
	for(int i=0;i<5;i++){
		cout<<num[i]<<" ";
		if(num[i]>max){
			max=num[i];
		}
	}
	cout<<endl;
	cout<<"Mximum number is::"<<max<<endl;
	return 0;
}
