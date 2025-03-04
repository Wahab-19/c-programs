#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter a Positive Integer=";
	cin>>n;
	for(int i=1;i<=n;i++){
		sum+=i*i;
		cout<<" ";
	}
	cout<<"The square root of an integer form 1 to "<<n<<" is = "<<sum<<endl;
	return 0;
}
