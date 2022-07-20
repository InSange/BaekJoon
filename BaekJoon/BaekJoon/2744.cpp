#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;
	cin >> s;

	for (auto& i : s)
	{
		if ((int)i < 97) cout << char(i + 32);
		else cout << char(i - 32);
	}

	//a 97 z 122 A 65
	return 0;
}