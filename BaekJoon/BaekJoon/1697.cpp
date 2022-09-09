#include <iostream>

using namespace std;

int N, K;
int dp[100002];

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N >> K;

	for (int i = 0; i <= N; i++)
	{
		dp[i] = N - i;
	}

	for (int i = N+1; i <= K; i++)
	{
		int min;

		if (i % 2 == 0) min = dp[i / 2] + 1;
		else min = dp[i / 2] + 2 < dp[(i + 1) / 2] + 2 ? dp[i / 2] + 2 : dp[(i + 1) / 2] + 2;

		dp[i] = min < dp[i - 1] + 1 ? min : dp[i - 1] + 1;
	}
	cout << dp[K];

	return 0;
}