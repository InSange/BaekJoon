#include <iostream>

using namespace std;

int hansu(int N)
{
	int count = 0, start = 1;
	while (start != N+1) {
		if (start < 100) count++;
		else {
			if (((start % 100) / 10) - (start / 100) == (start % 10) - ((start % 100) / 10)) count++;
		}
		start++;
	}

	return count;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;

	cin >> N;
	cout << hansu(N) << "\n";

	return 0;
}