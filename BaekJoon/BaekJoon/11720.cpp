#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		sum += c-48;
	}
	cout << sum << "\n";

	return 0;
}