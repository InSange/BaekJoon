#include <iostream>
#include <algorithm>

using namespace std;

int N;

int arr[301], dp[301];

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	dp[0] = arr[0];
	dp[1] = max(arr[1]+arr[0], arr[1]);
	dp[2] = max(arr[2] + arr[1], arr[0] + arr[2]);
	//cout << dp[0] << " " << dp[1] << " " << dp[2] << "\n";

	for (int i = 3; i < N; i++)
	{
		dp[i] = max(arr[i] + dp[i - 2], arr[i] + arr[i - 1] + dp[i - 3]);
		//cout << arr[i] + dp[i - 2] << " " << arr[i] + arr[i - 1] + dp[i - 3] << "\n";
		//cout << dp[i] << "\n";
	}

	cout << dp[N - 1];

	return 0;
}