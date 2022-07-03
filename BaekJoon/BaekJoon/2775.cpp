#include <iostream>
using namespace std;

int apart(int k, int n)
{
	if (n == 1) return 1;
	if (k == 0) return n;
	else return apart(k - 1, n) + apart(k, n - 1);
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T, k, n;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		cout << apart(k, n) << "\n";
	}

	return 0;
}