#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T, e;
	string s;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> e >> s;
		s.erase(e - 1, 1);
		cout << s << "\n";
	}

	return 0;
}