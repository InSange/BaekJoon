#include <iostream>

using namespace std;

int fac(int N) {
	if (N <= 1) return 1;
	return N * fac(N - 1);
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	cout << fac(N) << "\n";

	return 0;
}