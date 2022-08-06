#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, count = 0;

	cin >> n;

	cout << (n * (n + 1) * (n + 2)) / 2 << "\n";

	return 0;
}