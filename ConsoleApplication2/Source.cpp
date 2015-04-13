#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int max;
	cout << "Enter the first integer \n";
	cin >> a;
	cout << "Enter second integer \n";
	cin >> b;
	max = a;

	if (b > max)
		max = b;
	cout << "Maximum is: \n" << max;

	system ("pause");

}