#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int money, n;
		cin >> money >> n;
		for (int j = 0; j < n; j++)
		{
			int q, p;
			cin >> q >> p;
			money += q * p;
		}
		cout << money << "\n";
	}

	return 0;
}