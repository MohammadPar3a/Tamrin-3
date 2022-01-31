#include <iostream>

void sorting(int A[], int na);

using namespace std;

int main()
{
	int n, m, i;
	cout << "How many number do you want...?";
	cin >> n;
	int A[100];
	for (i = 0; i < n; i++)
	{
		cout << "Please enter your numbers...\n";
		cin >> m;
		A[i] = m;
	}
	sorting(A, n);
	return 0;

}

void sorting(int A[], int na)
{
	int i, j;
	for (i = 0; i < na; i++)
	{
		for (j = i + 1; j < na; j++)
		{
			if (A[i] > A[j]) swap(A[i], A[j]);
		}
	}
	for (i = 0; i < na; i++)
	{
		cout << A[i] << "\t";
	}
}