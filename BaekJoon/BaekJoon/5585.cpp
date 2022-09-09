#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, cnt = 0;

	cin >> N;

	N = 1000 - N;

	cnt = (N / 500) + ((N % 500) / 100) + (((N % 500) % 100) / 50)
		+ ((((N % 500) % 100) % 50) / 10) + (((((N % 500) % 100) % 50) % 10) / 5)
		+ ((((((N % 500) % 100) % 50) % 10) % 5) / 1);

	cout << cnt;

	return 0;
}