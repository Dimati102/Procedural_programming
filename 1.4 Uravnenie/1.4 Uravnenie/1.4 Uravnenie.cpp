#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a = 1;
	double b = 1;
	double c = 1;

	cin >> a >> b >> c;

	if (a == 0)
	{
		if (b == 0 && c == 0) cout << "Any x";
		else if (b == 0) cout << "No x";
		else cout << (c * -1) / b;
		return 0;
	}



	double D = pow(b, 2) - (4 * a * c);

	if (D > 0)
	{
		double x1 = (b * -1 - std::sqrt(D)) / (2 * a);
		double x2 = (b * -1 + std::sqrt(D)) / (2 * a);
		cout << "X1 = " << x1 << endl << "X2 = " << x2;
	}
	else if (D == 0)
	{
		cout << "X = " << (b * -1) / (2 * a);
	}
	else
	{
		cout << "No X!";
	}
}