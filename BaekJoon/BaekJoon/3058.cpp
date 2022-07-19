#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T, n, sum, min;

	cin >> T;
	for (int j = 0; j < T; j++) {
		sum = 0; min = 101;
		for (int i = 0; i < 7; i++) {
			cin >> n;
			if (n % 2 == 0)
			{
				sum += n;
				if (n < min) min = n;
			}
		}
		cout << sum << " " << min << "\n";
	}


	return 0;
}