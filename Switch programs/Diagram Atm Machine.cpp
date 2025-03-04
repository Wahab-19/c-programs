#include<iostream>
using namespace std;
int main()
{
	double balance=5000.00;// Inital balance
	double amount;
	int choice;
		cout<<"Atm  Machine:::"<<endl;
	cout<<"                                                            -------------------------"<<endl;
	cout<<"                                                            |     | screen     |     |"<<endl;
	cout<<"                                                            |     |   of       |     |"<<endl;
	cout<<"                                                            |     |    ATM     |     |"<<endl;
	cout<<"                                                            |     |------------|     |"<<endl;
	cout<<"                                                            |                        |"<<endl;
	cout<<"                                                            |            Card |----|-"<<endl;
	cout<<"                                                            |                        |"<<endl;
	cout<<"                                                            |    Check balance       |"<<endl;
	cout<<"                                                            |    Deposit Money       |"<<endl; 
	cout<<"                                                            |    Widthdraw Money     |"<<endl;
	cout<<"                                                            |      Exist             |"<<endl;
	cout<<"                                                            |              cash|----|-"<<endl;
	cout<<"                                                            --------------------------"<<endl;
	cout<<"                                                               ATM Machine diagram"<<endl;
	//ATM machine Options
	cout<<"                         Atm Machine Options"<<endl;
	cout<<"                          1. Check Balance"<<endl;
	cout<<"                          2. Deposit Money"<<endl;
	cout<<"                          3. Widthdraw Money"<<endl;
	cout<<"                          4. Transfer Money"<<endl;
	cout<<"                          5. Exist"<<endl;
	cout<<"Enter the Option:::";
	cin>>choice;
	//Switch case is used and also use of if,else if,else,nested if or else,
	switch(choice){
		case 1://For checked money 
			cout<<"         Your current balance :$"<<balance;
		break;
		case 2://For Deposit money
			cout<<"Enter the amount for Deposit $";
			cin>>amount;
			if(amount>0){
				balance +=amount;
				cout<<"             Your Money has deposited Sccessfully"<<endl;
				cout<<"             Your current Balance is: $"<<balance<<endl;
			}else if(amount==0){
				cout<<"              Invalid amount"<<endl;
			}else{
				cout<<"              Please enter the positive digits"<<endl;
		}
		break;
		case 3:// For widthdraw money
			cout<<"Enter the amount for Widthdraw: $";
			cin>>amount;
			if(amount>0&&amount<=balance){
				balance -=amount;
				cout<<"              Your Money has widthdraw Successfully"<<endl;
				cout<<"              Your current Balance is: $"<<balance<<endl;
			}else if(amount==0){
				cout<<"              Invalid amount"<<endl;
			}else if(balance<amount){
				cout<<"              You have Insufficient Balance"<<endl;
				cout<<"              You have $"<<balance<<" Money"<<endl;
			}else{
				cout<<"              Please enter the positive digits"<<endl;
			}
		break;
		case 4://For transaction Money
			cout<<"Enter the ID of the Resiver =";
			cin>>amount;
			cout<<"Enter the amount for Transaction: $";
			cin>>amount;
			if(amount>0&&amount<=balance){
				balance-=amount;
				cout<<"              Your Money has Transfered Successfully"<<endl;
				cout<<"              Your current Balance is: $"<<balance<<endl;
			}else if(amount==0){
				cout<<""<<endl;
			}else if(balance<amount){
				cout<<"              You have Insufficient Balance"<<endl;
				cout<<"              You have $"<<balance<<" Money"<<endl;
			}else{
				cout<<"             Please enter the positive digits"<<endl;
			}
		break;
		case 5://For exits
			cout<<"  Thank you for using Atm Machine .Goodby"<<endl;
		break;
		default://It is used if the above statement is not true then print this 
			cout<<"  Invalid Option. Please enter the valid Option given Up "<<endl;
	}
	return 0;
}
