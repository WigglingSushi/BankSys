//Pass class variables by reference
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;
//fstream f;

class bankInf 
{

public:
	double Balamount=0;
	char name[50];
	int accNum;

	void open_account(double);
	void deposit(double);
	void withdraw(double);
	void checkBal();

	int getAccNum();

/*	int retacno() const;		//function to return account number
	int retdeposit() const;		//function to return balance amount
	char rettype() const;		//function to return type of account
	*/

	};



int main()
{
	int num = 0;
	int hAcc;
	bankInf bank;


	do
	{
		system("cls");
		cout << "************************************************************************************************************************" << endl;
		cout << setw(67) << "BANK SYSTEM" << endl;
		cout << "************************************************************************************************************************" << endl;
		cout << setw(70) << "[1] - Yes" << endl;
		cout << setw(69) << "[2] - No" << endl;
		cout << setw(73) << "[3] - Cancel" << endl;
		cout << "************************************************************************************************************************" << endl;

		cout << "Do you already have an account?" << endl;
		cin >> hAcc;

		if (hAcc == 1)
		{
		
			int h;
			system("CLS");

			cout << "************************************************************************************************************************" << endl;
			cout << setw(67) << "BANK SYSTEM" << endl;
			cout << "************************************************************************************************************************" << endl;
			cout << setw(70) << "[1] - Deposit" << endl;
			cout << setw(71) << "[2] - Withdraw" << endl;
			cout << setw(76) << "[3] - Check Balance" << endl;
			cout << setw(67) << "[4] - Exit" << endl;
			cout << "************************************************************************************************************************" << endl;

			cin >> h;
			switch (h)
			{
			case 1:
				bank.deposit(num);
				break;
			case 2:
				bank.withdraw(num);
				break;
			case 3:
				bank.checkBal();
				break;
			case 4:
				return 0;
			default:
				if (h != 5)
				{
					cout << "Invalid! Please Try Again.";
					break;
				}
			}
		}

		else if (hAcc == 2)
		{
			bank.open_account(num);
		}
	} 	while (hAcc != 3);
}

void bankInf::open_account(double val)
{
	system("cls");

	fstream f;
	
	f.open("account.txt", ios::out);
	if (!f) 
	{
		cout << "\nFile not created!";
	}
	else {
		cout << "\nFile created successfully!";
		f.close();
	}
	
	//Cin buffer daw
	cout << "Full Name: " << endl;
	cin.ignore();
	cin.getline(name, 50);
	



	cout << "Initial Deposit: " << endl;
	cin >> val;
	Balamount = Balamount + val;

	system("cls");
	cout << name << endl;
	cout << Balamount << endl;
	system("pause");
}


void bankInf::deposit(double val)
{
	system("cls");

	cout << "Your current balance is: " << endl;
	cout << Balamount << endl;

	cout << "Input the desired amount: " << endl;
	cin >> val;

	Balamount = Balamount + val;
	cout << "Current Balance: " << Balamount << endl;
	system("pause");
}

void bankInf::withdraw(double val)
{
	system("cls");

	cout << "Your current balance is: " << endl;
	cout << Balamount << endl;

	cout << "Input the desired amount: " << endl;
	cin >> val;

	Balamount = Balamount - val;
	cout << "Current Balance: " << Balamount << endl;
	system("pause");
}

void bankInf::checkBal()
{
	system("cls");


	cout << "Your current balance is: " << endl;
	cout << Balamount << endl;

	system("pause");
}

int bankInf::getAccNum()
{
	return accNum;
}



/*
int account::retacno() const
{
	return acno;
}

int account::retdeposit() const
{
	return dep;
}

char account::rettype() const
{
	return type;
}
*/
