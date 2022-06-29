#include <iostream>

using namespace std;

/*
int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	if (a == b && b == c) cout << 10000 + (a * 1000) << endl;
	else if (a == b || b == c) cout << 1000 + (b * 100) << endl;
	else if (a == c) cout << 1000 + (a * 100) << endl;
	else if (a > b && a > c) cout << a * 100 << endl;
	else if (b > a && b > c) cout << b * 100 << endl;
	else if (c > a && c > b) cout << c * 100 << endl;

	return 0;
}
*/

int main()
{
	int a, b, c, reward = 0;

	cin >> a >> b >> c;

	if (a == b && b == c && a == c) {
		reward = 10000 + (a * 1000);
	}
	else if (a == b || b == c || a == c) {
		if (a == b || a == c) {
			reward = 1000 + (a * 100);
		}
		else reward = 1000 + (b * 100);
	}
	else {
		int max = a;
		if (b > a && b > c) max = b;
		else if (c > a && c > b) max = c;

		reward = max * 100;
	}

	cout << reward << endl;

	return 0;
}