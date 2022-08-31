#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int X, N, a, b;

	cin >> X >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		X -= (a*b);
	}

	if (X == 0) cout << "Yes" << "\n";
	else cout << "No\n";

	return 0;
}