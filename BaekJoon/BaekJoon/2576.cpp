#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int sum = 0, min = 1001;

	for (int i = 0; i < 7; i++)
	{
		int n;
		cin >> n;

		if (n % 2 == 1) {
			sum += n;
			if (min > n)
			{
				min = n;
			}
		}
	}

	if (sum == 0 && min == 1001)
	{
		cout << -1 << "\n";
	}
	else {
		cout << sum << "\n" << min << "\n";
	}

	return 0;
}