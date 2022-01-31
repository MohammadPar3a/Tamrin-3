#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Please enter your input number...:";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int m = i % 2;
		if (m != 0) cout << "*";
		if (m == 0) cout << "#";
	}
	return 0;
}