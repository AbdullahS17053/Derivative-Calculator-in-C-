//derivative calculator

#include <iostream>
using namespace std;

int main()
{
	string d = " ", var[100], var1[100];        
	double co[100], co1[100], co2[100], co3[100], pow[100], pow1[100], pow2[100], pow3[100];
	int i = 0, j = 0, choice = 0;
	label:
	cout << "For normal derivation enter 1. \nFor product rule enter 2. \nFor quotient rule enter 3. \nFor trignometric derivations enter 4. \nFor derivation of 'e' enter 5. \nFor derivation of 'ln' enter 6. \n";
	cout << "Enter choice: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		while (d != "Y")
		{
			for (i = 0; i < 100; i++)
			{
				cout << "Enter co-efficient: ";
				cin >> co[i];
				cout << "Enter variable: ";
				cin >> var[i];
				cout << "Enter power of variable: ";
				cin >> pow[i];
				co[i] = co[i] * pow[i];
				pow[i] = pow[i] - 1;
				cout << "If you to exit enter Y. Else enter N.";
				cin >> d;
				if (d == "Y")
				{
					break;
				}

			}

		}
		for (j = 0; j <= i; j++)
		{
			if (co[j] > 0)
			{
				cout << "+";
			}
			cout << co[j] << var[j] << "^" << pow[j] << " ";

		}
		break;


	case 2:
		while (d != "Y")
		{
			for (i = 0; i < 100; i++)
			{
				cout << "Enter co-efficient for variable 1: ";
				cin >> co[i];
				cout << "Enter variable 1: ";
				cin >> var[i];
				cout << "Enter power of variable 1: ";
				cin >> pow[i];
				co2[i] = co[i] * pow[i];
				pow2[i] = pow[i] - 1;
				cout << "Enter co-efficient for variable 2: ";
				cin >> co1[i];
				cout << "Enter variable 2: ";
				cin >> var1[i];
				cout << "Enter power of variable 2: ";
				cin >> pow1[i];
				co3[i] = co1[i] * pow1[i];
				pow3[i] = pow1[i] - 1;
				cout << "If you to exit enter Y. Else enter N.";
				cin >> d;
				if (d == "Y")
				{
					break;
				}

			}

		}
		for (j = 0; j <= i; j++)
		{
			cout << co[j] << var[j] << "^" << pow[j] << " * " << co3[j] << var1[j] << "^" << pow3[j] << " + " << co1[j] << var1[j] << "^" << pow[j] << " * " << co2[j] << var[j] << "^" << pow2[j];

		}
		break;

	case 3:
	
		while (d != "Y")
		{
			for (i = 0; i < 100; i++)
			{
				cout << "Enter the first coefficient: ";
				cin >> co[i];
				cout << "Enter the first variable: ";
				cin >> var[i];
				cout << "Enter the first power: ";
				cin >> pow[i];
				cout << "Enter the second coeffiecient: ";
				cin >> co1[i];
				cout << "Enter the second variable:";
				cin >> var1[i];
				cout << "Enter the second power: ";
				cin >> pow1[i];
				co2[i] = co[i] * pow[i];
				co3[i] = co1[i] * pow[i];
				pow2[i] = pow[i] - 1;
				pow3[i] = pow1[i] - 1;
				cout << "If you to exit enter Y. Else enter N.";
				cin >> d;
				if (d == "Y")
				{
					break;
				}

			}
		}
		for (j = 0; j <=i; j++)
		{
			cout << "(" << "( " << co1[j] << var1[j] << "^" << pow1[i] << "" << co2[i] << var[i] << "^" << pow2[i] << " )" << " - " << "( " << co[i] << var[i] << "^" << pow[i] << "" << co3[i] << var1[i] << "^" << pow3[i] << " )" << ")" << endl;
			cout << "_____________________________" << endl;
			cout << endl;
			cout << "      " << "(" << "(" << co[i] << var[i] << "^" << pow[i] << ")" << "*" << "(" << co[i] << var[i] << "^" << pow[i] << ")" << ")";
		}
		break;
	

    case 4:
	{
		while (d != "Y")
		{
			for (i = 0; i < 100; i++)
			{
				cout << "Enter co-efficient: ";
				cin >> co[i];
				cout << "Enter trignometric fucntion: ";
				cin >> var[i];
				cout << "Enter co-efficient of angle: ";
				cin >> pow[i];
				co[i] = co[i] * pow[i];
				pow[i] = pow[i];
				cout << "If you to exit enter Y. Else enter N.";
				cin >> d;
				if (d == "Y")
				{
					break;
				}

			}

		}
		for (j = 0; j <= i; j++)
		{
			if (var[j] == "sin")
			{
				var[j] = "cos";
			}
			if (var[j] == "cos")
			{
				var[j] = "sin";
				co[j] = co[j] * -1;
			}
			if (var[j] == "tan")
			{
				var[j] = "sec^²";
			}
			if (co[j] > 0)
			{
				cout << "+";
			}
			cout << co[j] << var[j] << pow[j] << "x";

		}
		break;
	}

	case 5:
	{
		cout << "Enter co-efficient of 'e': ";
		cin >> co1[i];
		var1[i] = "e";
		cout << "The following is for the power of 'e'." << endl;
		cout << "Enter co-efficient: ";
		cin >> co[i];
		cout << "Enter variable: ";
		cin >> var[i];
		cout << "Enter power of variable: ";
		cin >> pow[i];
		co3[i] = co[i] * pow[i];
		pow3[i] = pow[i] - 1;
		if (co[j] > 0)
		{
			cout << "+";
		}
		cout << co1[j] << var1[j] << "^" << "( " << co[j] << var[j] << "^" << pow[j] << " )" << " * " << co3[j] << var[j] << "^" << pow3[j];
		break;

	}

	case 6:
	{
		cout << "Enter the coefficient: ";
		cin >> co[i];
		cout << "Enter the variable: ";
		cin >> var[j];
		cout << "Enter power of variable: ";
		cin >> pow[i];
		cout << "The value is ln(" << co[i] << var[i] << pow[i] << ")." << endl;
		cout << "The derivative is: " << endl << "( " << co[i] * pow[i] << var[i] << "^" << pow[i] - 1 << " )" << " / " << "( " << co[i] << var[i] << "^" << pow[i] << " )";
		break;

	}
	default:
		cout << "Enter valid option." << endl;
		goto label;
	}






	

}