#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0; i < 2 * n - 1; i++)
	{
		if (i < n)
		{
			for (int j = 0; j < i + 1; j++)
			{
				cout << "*";
			}
			for (int j = 0; j < 2 * (n - 1 - i); j++)
			{
				cout << " ";
			}
			for (int j = 0; j < i + 1; j++)
			{
				cout << "*";
			}
		}
		else
		{
			for (int j = 0; j < n + (n-1) - i; j++)
			{
				cout << "*";
			}
			for (int j = 0; j < 2 * (i - (n-1)); j++)
			{
				cout << " ";
			}
			for (int j = 0; j < n + (n-1) - i; j++)
			{
				cout << "*";
			}
		}
		cout << "\n";
	}

	return 0;
}