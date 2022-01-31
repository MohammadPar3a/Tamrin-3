#include <iostream>

using namespace std;

int main()
{
	int A[100];
	int n;

	cout << "How many number do you want...?";
	cin >> n;

	srand(time(0));

	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 100;
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Number" << i + 1 << "is" << A[i] << endl;
	}

	return 0;
}