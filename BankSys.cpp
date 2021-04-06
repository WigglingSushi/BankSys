//Pass class variables by reference
#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

class bankInf {
public:
	double Balamount=0, depAmt, InpAmt=0;
	string fName, lName, emailAd;
	char PIN[4];

	void open_account()
	{
		system("cls");



		//Cin buffer daw
		cout << "First Name: " << endl;
		getline(cin, fName);
		cin.ignore();

		cout << "Last Name: " << endl;
		getline(cin, lName);
		cin.ignore();

		cout << "email address: " << endl;
		getline(cin, emailAd);
		cin.ignore();



		//di pa mapagana
		/*cout << "(4-Digit)PIN: ";
		for (int i = 1; i <= 4; i++)
		{
			PIN[i] = _getch(); _putch('*');
			if (PIN[i] == 4) break;
		}
		*/

		cout << "Initial Deposit: " << endl;
		cin >> depAmt;
		cin.ignore();
		Balamount = Balamount + depAmt;

		cout << fName << " " << lName << endl;
		cout << emailAd << endl;
		cout << Balamount << endl;

	}


	void deposit()
	{
		system("cls");
		

		cout << "Input the desired amount: " << endl;
		cin >> InpAmt;

		Balamount = Balamount + InpAmt;
		cout << "Current Balance: " << Balamount << endl;
		system("pause");
	}

	void withdraw()
	{
		system("cls");
	

		cout << "Input the desired amount: " << endl;
		cin >> InpAmt;

		Balamount = Balamount - InpAmt;
		cout << "Current Balance: " << Balamount << endl;
		system("pause");
	}

	void checkBal()
	{
		system("cls");

		cout << "Your current balance is: " << endl;
		cout << Balamount << endl;

		system("pause");
	}
};


int main()
{
	bankInf inf;
	int hAcc;

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
				inf.deposit();
				break;
			case 2:
				inf.withdraw();
				break;
			case 3:
				inf.checkBal();
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
			inf.open_account();
		}
	} 	while (hAcc != 3);
}

