#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T, score;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int sum = 0, arr[5] = {};
		for (int j = 0; j < 5; j++)
		{
			cin >> score;
			arr[j] = score;
			sum += score;
		}
		sort(arr, arr + 5);
		if (arr[3] - arr[1] >= 4) cout << "KIN" << "\n";
		else cout << sum - arr[0] - arr[4] << "\n";

	}

	return 0;
}