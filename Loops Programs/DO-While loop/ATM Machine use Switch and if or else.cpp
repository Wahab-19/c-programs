#include<iostream>
using namespace std;
int main(){
	double balance=200000.0000;//Intial blance
	string name;
	int choice;
	double amount;
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
	cout<<"Enter Name::";
	cin>>name;
	cout<<"Enter the Bank account Id=";
	cin>>amount;
	cout<<"--------------------------------------------------------------------------------------------------------------"<<endl;
	do{
		cout<<"              Choice ATM Machine Option"<<endl;
		cout<<"                    1. Check Balance "<<endl;
		cout<<"                    2. Deposit Money"<<endl;
		cout<<"                    3. Withdraw Money"<<endl;
		cout<<"                    4.  Exist"<<endl;
		cout<<"Enter your Choice=";
		cin>>choice;
		switch(choice){
			case 1://CHECK BALANCE
				cout<<"   Your current balance is:  $"<<balance<<endl;
		break;
		case 2://Deposit Money
			cout<<"   Enter the amount to deposit: $";
			cin>>amount;
			if(amount>0){
				balance +=amount;
				cout<<"Successfully Deposit $"<<amount<<".New balance $"<<balance<<endl;
			}else{
				cout<<"Invalid amout .pease enter the positive number."<<endl;
			}
		break;
		case 3:
			cout<<"   Enter the amount to Withdraw: $";
			cin>>amount;
			if(amount>0 && amount<=balance){
          balance -= amount;
          cout << "Successfully withdrew $" << amount
               << ". New balance is $" << balance << endl;
        } else if (amount > balance) {
          cout << "Insufficient balance." << endl;
        } else {
          cout << "Invalid amount. Please enter a positive number." << endl;
        }
        break;
		case 4:
			cout<<"Thank you for using Atm Machine .Goodby"<<endl;
			break;
			defult:
				cout<<"Invalid option .please select the valid option"<<endl;
			}
	}while(choice!=4);
	return 0;
}
