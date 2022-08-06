#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, score = 1, sum = 0;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		int n;
		cin >> n;
		if (n == 1)
		{
			sum += score++;
		}
		else
		{
			score = 1;
		}
	}

	cout << sum << "\n";

	return 0;
}