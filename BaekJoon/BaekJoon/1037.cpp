#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, min = 10000000, max = 0, num;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;

		if (num < min) min = num;
		if (num > max) max = num;
	}

	cout << min * max << "\n";

	return 0;
}