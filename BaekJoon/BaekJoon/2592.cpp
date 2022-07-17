#include <iostream>

using namespace std;

int arr[1001] = {};

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, mean=0, max=0, mod;

	for (int i = 0; i < 10; i++) {
		cin >> n;
		arr[n]++;
		mean += n;
	}

	for (int i = 0; i < 1000; i+=10) {
		if (arr[i] > max)
		{
			max = arr[i];
			mod = i;
		}
	}

	cout << mean / 10 << "\n" << mod << "\n";

	return 0;
}