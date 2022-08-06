#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		int x, y;

		cin >> x >> y;
		cout << "Case " << i << ": " << x + y << "\n";
	}

	return 0;
}