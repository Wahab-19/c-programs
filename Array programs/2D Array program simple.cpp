#include<iostream>
using namespace std;
int main()
{
	int row=3,col=4;
	int num[row][col];
	cout<<" Enter "<<row<<" X"<<col<<" values for 2D array"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter value for element["<<i<<"]"<<"["<<j<<"]=";
			cin>>num[i][j];
		}
	}
	cout<<"2D Array Elements :"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<num[i][j]<<" ";
		}
		cout<<endl;
	}
}
