#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T, n;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> n;
		int count = 0;
		while (n != 0)
		{
			if (n % 2 == 1) cout << count << " ";
			n = n / 2;
			count++;
		}
	}

	return 0;
}