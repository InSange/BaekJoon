#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	while (1) {
		int n, count = 0;

		cin >> n;
		if (n == 0) break;

		bool array[250000];

		for (int i = 2; i < (2 * n) + 1; i++) {
			array[i] = 1;
		}

		for (int i = 2; i * i <= 2 * n; i++) {
			if (array[i] == 1) {
				for (int j = i * i; j <= 2 * n; j += i) {
					array[j] = 0;
				}
			}
		}

		for (int i = n; i <= 2 * n; i++) {
			if (array[i] == 1&& i!=n) count++;
		}

		cout << count << "\n";
	}

	return 0;
}