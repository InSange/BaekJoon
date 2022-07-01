#include <iostream>
#define MAX 10001

using namespace std;
int a[MAX] = {};

void check(int n)
{
	int sum = n, dop = n;
	while (dop != 0) {
		sum += dop % 10;
	dop = dop / 10;
	};

	if (a[sum] == 0 && sum < MAX) a[sum] = 1;
}

void result()
{
	for (int i = 1; i < MAX; i++) {
		if (a[i] == 0) cout << i << "\n";
	}
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	for (int i = 1; i < MAX; i++) {
		check(i);
	}
	result();

	return 0;
}