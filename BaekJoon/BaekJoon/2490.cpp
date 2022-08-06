#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	for (int i = 0; i < 3; i++)
	{
		int n, sum=0;
		for (int j = 0; j < 4; j++)
		{
			cin >> n;
			sum += n;
		}
		if (sum == 3)
		{
			cout << 'A' << "\n";
		}
		else if (sum == 2)
		{
			cout << 'B' << "\n";
		}
		else if (sum == 1)
		{
			cout << 'C' << "\n";
		}
		else if (sum == 0)
		{
			cout << 'D' << "\n";
		}
		else if (sum == 4)
		{
			cout << 'E' << "\n";
		}
	}

	return 0;
}