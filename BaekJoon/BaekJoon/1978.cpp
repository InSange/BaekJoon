#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, count = 0, n;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> n;
		if (n >= 2) {
			int f = 0;
			for (int j = 2; j < n; j++) {
				if (n % j == 0)
					f = 1;
			}
			if (f != 1) count++;
		}
	}
	cout << count << "\n";

	return 0;
}