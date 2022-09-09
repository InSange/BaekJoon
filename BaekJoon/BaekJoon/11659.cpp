#include <iostream>

using namespace std;

int N, M;
int arr[1000002];

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		if (i == 0)
		{
			cin >> arr[i];
		}
		else
		{
			cin >> arr[i];
			arr[i] += arr[i - 1];
		}
	}


	while (M--)
	{
		int i, j;
		cin >> i >> j;

		if (i == 1)
		{
			cout << arr[j - 1] << "\n";
		}
		else {
			cout << arr[j - 1] - arr[i - 2] << "\n";
		}
	}
	

	return 0;
}