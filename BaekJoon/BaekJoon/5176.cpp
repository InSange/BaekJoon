#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int K, P, M, seat;
	cin >> K;

	for (int i = 0; i < K; i++)
	{
		cin >> P >> M;
		bool arr[501] = {};
		int count = 0;
		for (int j = 0; j < P; j++)
		{
			cin >> seat;
			if (arr[seat] == false) arr[seat] = true;
			else count++;
		}
		cout << count << "\n";
	}

	return 0;
}