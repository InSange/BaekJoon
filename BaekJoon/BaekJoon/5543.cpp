#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, bugger = 10000, bevarage = 10000;

	for (int i = 0; i < 5; i++) {
		cin >> n;
		if (i < 3 && bugger > n) bugger = n;
		if (i >= 3 && bevarage > n) bevarage = n;
	}

	cout << bugger + bevarage - 50 << "\n";

	return 0;
}