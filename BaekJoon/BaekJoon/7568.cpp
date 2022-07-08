#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, x[51] = {}, y[51] = {};

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
	}

	for (int i = 0; i < N; i++) {
		int rank = 1;
		for (int j = 0; j < N; j++) {
			if (x[i] < x[j] && y[i] < y[j])
			{
				rank++;
			}
		}
		cout << rank << " ";
	}

	return 0;
}