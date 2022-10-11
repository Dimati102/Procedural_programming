#include <iostream>
using namespace std;
int main()
{
	bool lamp, curtain;
	int day;
	cout << "Is the lamp on?" << endl;
	cin >> lamp;
	cout << "Is curtain opened?" << endl;
	cin >> curtain;
	cout << "What time is it?" << endl;
	cin >> day;
	if (lamp == 1)
	{
		cout << "The room is light.";
	}
	else
	{
		if ((9 <= day <= 21))
		{
			if (curtain == 1)
			{
				cout << "The room is light.";
			}
			else
			{
				cout << "The room is dark.";
			}
		}
		else
		{
			cout << "The room is dark.";
		}
	}
}