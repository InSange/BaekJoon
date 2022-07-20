#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;
	while (1)
	{
		getline(cin, s);
		if (s == "END") break;

		for (int i = s.size() - 1; i >= 0; i--)
		{
			cout << s[i];
		}
		cout << "\n";
	}

	return 0;
}