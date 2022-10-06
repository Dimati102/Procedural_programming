#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() 
{
	string text;
	cout << "text: ";
	cin >> text;
	sort(text.begin(), text.end());
	cout << text << endl;
}