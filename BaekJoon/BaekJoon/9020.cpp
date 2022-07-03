#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;

	bool array[10001];
	cin >> T;

	for (int i = 0; i < T; i++) {
		int n;

		cin >> n;

		for (int j = 2; j <= n; j++) array[j] = 1;

		for (int j = 2; j * j <= n; j++) {
			if (array[j] == 1) {
				for (int k = j * j; k <= n; k += j) {
					array[k] = 0;
				}
			}
		}

		for (int j = n/2; j >= 0; j--) {
			if (array[j] == 1 && array[n - j] == 1) {
				cout << j << " " << n - j << "\n";
				break;
			}
		}

	}

	return 0;
}