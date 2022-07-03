#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, count = 2;

	cin >> N;

	while (N > 1) {
		if (N % count == 0) {
			cout << count << "\n";
			N = N / count;
			count = 2;
		}
		else count++;
	}

	return 0;
}