#include <iostream>
using namespace std;
int main()
{
	double b = 1;
	double c = 1;

	cin >> b >> c;
	if (b == 0)
	{
		if (c == 0) std::cout << "Х = any number";
		else cout << "no solutions";
		return 0;
	}
	double x = -c / b;
	cout << x;
}