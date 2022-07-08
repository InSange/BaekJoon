#include <iostream>

using namespace std;

void generator(int N)
{
	int min = N, ch = 0;
	for (int i = N / 2; i < N; i++)
	{
		int n = i;
		int sum = i;
		while (n != 0) {
			sum += n % 10;
			n = n / 10;
		}
		if (sum == N && i < min) {
			min = i;
			ch++;
		}
	}
	if (ch > 0) cout << min << "\n";
	else cout << 0 << "\n";
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;

	cin >> N;

	generator(N);

	return 0;
}