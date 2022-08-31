#include <iostream>

using namespace std;

int arr[1002] = {};
int dp[1002] = {};
int N, max_result = 0;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j] && dp[i] <= dp[j])
			{
				dp[i] = dp[j] + 1;
				if (max_result < dp[i]) max_result = dp[i];
			}
		}
	}
	
	cout << max_result << "\n";

	return 0;
}