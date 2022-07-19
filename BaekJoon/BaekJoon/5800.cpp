#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int i, int j)
{
	return i > j;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int K, N;

	cin >> K;
	
	int** arr = new int*[K];

	for (int i = 0; i < K; i++) {
		cin >> N;
		arr[i] = new int[N];

		int sum = 0, max = 0, min = 101, Lgap = 0;
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] > max) max = arr[i][j];
			if (arr[i][j] < min) min = arr[i][j];
		}

		sort(arr[i], arr[i] + N, compare);

		for (int j = 0; j < N-1; j++)
		{
			if (arr[i][j] - arr[i][j + 1] > Lgap) Lgap = arr[i][j] - arr[i][j + 1];
		}
		cout << "Class " << i + 1 << "\nMax " << max << ", Min " << min << ", Largest gap " << Lgap << "\n";
	}

	return 0;
}