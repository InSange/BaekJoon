#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, K, count = 0;

	cin >> N >> K;

	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = N - 1; i >= 0; i--)
	{
		if (K / arr[i] != 0)
		{
			count += K / arr[i];
			K -= (arr[i] * (K / arr[i]));
		}
	}

	cout << count << "\n";

	return 0;
}