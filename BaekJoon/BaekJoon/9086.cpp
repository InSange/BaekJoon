#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	while (T--)
	{
		string s;
		cin >> s;

		cout << s[0] << s[s.size() - 1] << "\n";
	}

	return 0;
}