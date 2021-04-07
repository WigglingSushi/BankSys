//Pass class variables by reference
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<conio.h>
#include<vector>

using namespace std;
//fstream f;

class bankInf 
{
	//fstream f;

public:
	

	double Balamount=0, InpAmt = 0;
	char name[50];
	string accNum;
	string val;
	
	//void write_account();

	void open_account();
	void deposit();
	void withdraw();
	void checkBal();
	//void create_acc();

	/*
	void display_all();		//function to display all account details

	void show_account() const;	//function to show data on screen

	void report() const;	//function to show data in tabular format

	double retacno() const;		//function to return account number
	double retdeposit() const;		//function to return balance amount
	*/

	};
/*
void createAcc() 
{
	bankInf temp;
	vector<bankInf> bankszz;
		//put code to get details


		

		bankszz.push_back(temp);
}
*/

/*
void bankInf::report() const
{
	cout << accNum << setw(10) << " " << name << setw(10) << " "  << Balamount << endl;
}
*/

/*
void bankInf::show_account() const
{
	cout << "\nAccount No. : " << accNum;
	cout << "\nAccount Holder Name : ";
	cout << name;
	cout << "\nBalance amount : " << Balamount;
}
*/

int main()
{
	bankInf bank;
	string num;
	int hAcc, a = 0;
	int h;


	do
	{


		system("CLS");

		cout << "************************************************************************************************************************" << endl;
		cout << setw(67) << "BANK SYSTEM" << endl;
		cout << "************************************************************************************************************************" << endl;
		cout << setw(70) << "[1] - Deposit" << endl;
		cout << setw(71) << "[2] - Withdraw" << endl;
		cout << setw(76) << "[3] - Check Balance" << endl;
		cout << setw(77) << "[4] - Create Account" << endl;
		cout << setw(67) << "[5] - Exit" << endl;
		cout << "************************************************************************************************************************" << endl;
		
		cout << "Input: ";
		cin >> h;
		switch (h)
		{
		case 1:

			bank.deposit();
			break;
		case 2:

			bank.withdraw();
			break;
		case 3:

			bank.checkBal();
			break;
		case 4:
			bank.open_account();
			break;
		case 5:
			return 0;
		default:
			if (h != 6)
			{
				cout << "Invalid! Please Try Again.";
				break;
			}
		}
	}
			while (h != 5);
}

/*
void bankInf::create_acc()
{
	system("cls");
	cout << "************************************************************************************************************************" << endl;
	cout << setw(67) << "BANK SYSTEM" << endl;
	cout << "************************************************************************************************************************" << endl;
	cout << setw(70) << "[1] - Yes" << endl;
	cout << setw(69) << "[2] - No" << endl;
	cout << setw(73) << "[3] - Cancel" << endl;
	cout << "************************************************************************************************************************" << endl;

}
*/

void bankInf::open_account()
{
	system("cls");
	
	cout << "Full Name: " << endl;
	cin.ignore();
	cin.getline(name, 50);
	
	cout << "Account Number: " << endl;
	cin >> accNum;


	cout << "Initial Deposit: " << endl;
	cin >> InpAmt;
	Balamount = Balamount + InpAmt;

	system("cls");
	cout << name << endl;
	cout << accNum << endl;
	cout << Balamount << endl;

	system("pause");
}


void bankInf::deposit()
{
	cout << "\n\n\tEnter The account No. : ";
	cin >> val;

	int vali = stoi(val);
	int accNumi = stoi(accNum);

	system("cls");
	if (accNumi == vali)
	{
		cout << "Your current balance is: " << endl;
		cout << Balamount << endl;

		cout << "Input the desired amount: " << endl;
		cin >> InpAmt;

		Balamount = Balamount + InpAmt;
				cout << "Current Balance: " << Balamount << endl << endl;
		system("pause");
	}
	else
	{
		cout << "invalid!" << endl <<endl;
		system("pause");
	}
}

void bankInf::withdraw()
{
	cout << "\n\n\tEnter The account No. : ";
	cin >> val;


	int vali = stoi(val);
	int accNumi = stoi(accNum);

	system("cls");
	if(accNumi == vali)
	{
		cout << "Your current balance is: " << endl;
		cout << Balamount << endl;

		cout << "Input the desired amount: " << endl;
		cin >> InpAmt;

		Balamount = Balamount - InpAmt;
		
		system("cls");
		
		if (Balamount < 500)
		{
			Balamount += InpAmt;
			cout << "Insufficient Funds!" <<endl;
			
			system("pause");
			system("cls");
			
			cout << "Current Balance: " << Balamount << endl << endl;
		}
		else
		{
			cout << "Current Balance: " << Balamount << endl << endl;
		}
		system("pause");
	}
	else
	{
		cout << "invalid!"<<endl;
		system("pause");
	}
}

void bankInf::checkBal()
{
	cout << "\n\n\tEnter The account No. : ";
	cin >> val;


	int vali = stoi(val);
	int accNumi = stoi(accNum);

	system("cls");
	
	if(accNumi == vali)
	{
	cout << name << endl;
	cout << "Your current balance is: " << endl;
	cout << Balamount << endl << endl;

	system("pause");
}
	else
	{
		cout << "invalid!"<<endl;
		system("pause");
	}
}


/*
double bankInf::retacno() const
{
	return accNum;
}

double bankInf::retdeposit() const
{
	return InpAmt;
}
*/
