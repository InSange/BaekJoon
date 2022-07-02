#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, count = 1, start=1;
	cin >> n;

	while (1) {
		if (n <= start) {
			break;
		}
		else {
			start += 6 * count;
			count++;
		}
	}
	cout << count << "\n";

	return 0;
}