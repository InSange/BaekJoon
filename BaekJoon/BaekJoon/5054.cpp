#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t, n, xi;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int min = 100, max = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> xi;
			if (min > xi) min = xi;
			if (max < xi) max = xi;
		}
		cout << (max - min) * 2 << "\n";
	}

	return 0;
}