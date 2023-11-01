#include <iostream>
using namespace std;
int main()

{
	int num1, num2, sum = 0;
	cout << "Enter first integer: ";
	cin >> num1;
	cout << "Enter second integer: ";
	cin >> num2;

	while (num1 < num2)	{
		if(num1%2 != 0)	;
		else 		sum += num1;

		num1++;
	}
	cout << "The sum of all even numbers between these integers is " << sum << "." << endl;
	cin.get();
return 0;
}

