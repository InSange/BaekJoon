#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	long long n, sum = 0, arr[91] = { 0,1, };

	cin >> n;

	if (n == 1 || n == 0)
	{
		cout << arr[n] << "\n";
	}
	else {
		for (int i = 2; i <= n; i++)
		{
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		cout << arr[n] << "\n";
	}

	return 0;
}