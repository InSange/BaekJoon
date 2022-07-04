#include <iostream>

using namespace std;
int c = 1;

void hanoi(int n, char start, char temp, char end)
{
	if (n == 1) {
		cout << start << " " << end << "\n";
	}
	else {
		hanoi(n - 1, start, end, temp);
		cout << start << " " << end << "\n";
		hanoi(n - 1, temp, start, end);
	}

}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, K=0;

	cin >> N;

	for (int i = 0; i < N-1; i++) {
		c = (c * 2) + 1;
	}

	cout << c << "\n";

	hanoi(N, '1', '2', '3');

	return 0;
}