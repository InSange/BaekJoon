#include <iostream>

using namespace std;

int a[1000] = { 6, 6, 6};

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, count = 0, start=666;

	cin >> N;

	while (count < N) {
		int num = start, six = 0;

		while (num != 0)
		{
			if ((num % 10) == 6) six++;
			else six = 0;
			if (six == 3) break;
			num = num / 10;
		}
		if (six == 3) count++;
		if (count == N) {
			cout << start;
			break;
		}
		else {
			start++;
		}

	}

	return 0;
}