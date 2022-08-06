#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		sum += n;
	}

	cout << sum << "\n";

	return 0;
}