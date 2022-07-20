#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	string s;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> s;
		cout << (s[0] - '0') + (s[2] - '0') << "\n";
	}

	return 0;
}