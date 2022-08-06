#include <iostream>

using namespace std;

int main()
{
	int T, N;

	cin >> T;

	while (T--)
	{
		int sum = 0;
		cin >> N;
		while (N--)
		{
			int n;
			cin >> n;
			sum += n;
		}
		cout << sum << "\n";
	}

	return 0;
}