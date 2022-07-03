#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int M, N, sum = 0, min;

	cin >> M >> N;

	min = N;

	for (int i = M; i <= N; i++) {
		if (i >= 2) {
			int f = 0;
			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					f = 1;
					break;
				}
			}
			if (f != 1) {
				sum += i;
				if (i < min) min = i;
			}
		}
	}

	if (sum == 0) cout << -1 << "\n";
	else cout << sum << "\n" << min << "\n";

	return 0;
}