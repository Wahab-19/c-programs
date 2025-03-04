#include<iostream>
using namespace std;
int main()
{
	int num[15]={3,6,8,9,15,16,7,2};
	int key;
	bool found=false;
	cout<<"Enter the Key=";
	cin>>key;
	for(int i=0;i<15;i++){
		if(key==num[i]){
			found=true;
		}
	}
	if(found){
		cout<<"\tFound Key"<<endl;
	}else{
		cout<<"\tNot Found Key"<<endl;
	}
}
