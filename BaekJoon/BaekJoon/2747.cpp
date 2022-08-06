#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int arr[50] = { 0, 1, 1, };

	int n;

	cin >> n;

	if (n <= 2)
	{
		cout << arr[n] << "\n";
	}
	else {
		for (int i = 3; i <= n; i++)
		{
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		cout << arr[n] << "\n";
	}

	return 0;
}