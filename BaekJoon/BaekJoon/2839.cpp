#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = N/5; i >=0 ; i--) {
		if (N - (5 * i) == 0) {
			cout << i << "\n";
			break;
		}
		else if ((N - (5 * i)) % 3 == 0) {
			cout << i + ((N - (5 * i)) / 3) << "\n";
			break;
		}
		if (i == 0 && N % 3 == 0) {
			cout << N / 3 << "\n";
			break;
		}
		else if (i == 0 && N % 3 != 0) cout << -1 << "\n";
	}

	return 0;
}