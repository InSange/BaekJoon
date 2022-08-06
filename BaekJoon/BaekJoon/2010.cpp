#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, plug, sum=0;

	cin >> N;
	while (N--)
	{
		cin >> plug;
		if (N == 0)
		{
			sum += plug;
			break;
		}
		sum += plug - 1;
	}

	cout << sum << "\n";

	return 0;
}