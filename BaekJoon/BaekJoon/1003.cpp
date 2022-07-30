#include <iostream>

using namespace std;

int NZ[41] = {1,0,}, NO[41] = {0,1,};

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int n;
		cin >> n;
		for (int j = 2; j <= n; j++)
		{
			NZ[j] = NZ[j - 1] + NZ[j - 2];
			NO[j] = NO[j - 1] + NO[j - 2];
		}

		cout << NZ[n] << " " << NO[n] << "\n";
	}

	return 0;
}