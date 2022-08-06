#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, K, count = 0;

	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			count++;
		}
		if (count == K)
		{
			cout << i << "\n";
			break;
		}
	}

	if (count != K)
		cout << 0 << "\n";


	return 0;
}