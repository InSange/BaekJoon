#include <iostream>

using namespace std;

void blackjack(int n, int m)
{
	int* array = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	int max = 0;
	for (int i = 0; i < n - 2; i++) {
		for (int j = i+1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				if (max < array[i] + array[j] + array[k] && array[i] + array[j] + array[k] <= m) max = array[i] + array[j] + array[k];
				if (max == m) break;
			}
		}
	}
	cout << max << "\n";
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M;

	cin >> N >> M;

	blackjack(N, M);

	return 0;
}