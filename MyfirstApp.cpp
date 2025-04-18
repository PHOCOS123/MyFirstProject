
#include <iostream>
using namespace std;

int main()
{
    int annualSalary;
    cout << "Enter your annual Salary: ";
    cin >> annualSalary;  

    float monthSalary = annualSalary / 12;
    cout << "Your monthly salary will be :"; cout<< monthSalary << endl;

	cout << "In 10 year your Salary will be :"; cout << annualSalary * 10 << endl;

    cout << "You can also calculate it using this calculator" << endl;
    
    int num1;
    cout << "Enter first number : ";
    cin >> num1;

    char operation;
    cout << "Enter operation ";
    cin >> operation;

    int num2;
    cout << "Enter second number:";
    cin >> num2;
    
    // if statement
	int result;
    if (operation == ' + ')
    {
		cout << result; cout << num1 + num2 << endl;
    }
    else if (operation == ' - ') {
		cout << result; cout << num1 - num2 << endl;
    }
    else if (operation == ' * ') {
		cout << result; cout << num1 * num2 << endl;
    }
    else if (operation == ' / ') {
		if (num2 != 0) {
			cout << result; cout << num1 / num2; cout << endl;
		}
		else {
			cout << "Division by zero is not allowed";
		}

    }
    else {
        cout << "Invalid" << endl;
    }


	return 0;
}

