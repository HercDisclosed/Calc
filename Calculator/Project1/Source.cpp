#include <iostream>

#include <Windows.h>

#include <cmath>

using namespace std;

int main() {
	char letter;
	char Again = 'n';
	int waittime = 3000;
	double Number1;
	double Number2;
	double total;
	while (Again == 'n' || letter == 'n') {
		cout << "Calculator, Made By hercdisclosed On discord" << endl;
		cout << "Would You like to proceed with this application? [Y] Or [N]" << endl;
		cin >> letter;
		if (letter == 'y' || letter == 'Y')
		{
			cout << "+,-,*,/,^ or [A]--Area Enter Radius For number 1, [C] Circumference Enter Diameter, [S] SquareRoot" << endl;
			cin >> letter;
			if (letter == 'A' || letter == 'a' || letter == 'C' || letter == 'S')
			{
				cout << "Number 1: ";
				cin >> Number1;
			}
			else
			{
				cout << "Number 1: ";
				cin >> Number1;
				cout << "Number 2: ";
				cin >> Number2;
			}
		}
		else
		{
			int timeintoseconds = waittime / 1000;
			cout << "Exiting Program in " << timeintoseconds << " Seconds.." << endl;
			 Sleep(3000);
			 exit(0);
		}
		switch (letter)
		{
		case '+':
			total = Number1 + Number2;
			cout << "Total is: " << total << endl;
			break;
		case '-':
			total = Number1 + Number2;
			cout << "Total is: " << total << endl;
			break;
		case '*':
			total = Number1 * Number2;
			cout << "Total is: " << total << endl;
			break;
		case '/':
			total = Number1 / Number2;
			cout << "Total is: " << total << endl;
			break;
		case '^':
			total = pow(Number1, Number2);
			cout << "Total is: " << total << endl;
			break;
		case 'A':
			total = 3.14 * pow(Number1, 2);
			cout << "Total is: " << total << endl;
			break;
		case 'C':
			total = 3.14 * Number1;
			cout << "Total is: " << total << endl;
			break;
		case 'S':
			total = sqrt(Number1);
			cout << "Total is: " << total << endl;
		}
		cout << "Would You like to reset this program? [Y], [N]" << endl; //asks the user do we wanna start again>, if Y or y, then it restarts the program//
		cin >> letter;
		if (letter == 'y' || letter == 'Y')
		{
			int timeintoseconds = waittime / 1000;
			cout << "Exiting Program in " << timeintoseconds << " Seconds.." << endl;
			Sleep(3000);
			exit(0);
		}
	}
	system("pause");
}