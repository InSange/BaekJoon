#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	while (T--)
	{
		int V, E;
		cin >> V >> E;

		cout << 2 - V + E << "\n";
	}

	return 0;
}