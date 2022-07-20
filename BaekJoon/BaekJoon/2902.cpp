#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;
	cin >> s;
	
	bool b = true;

	for (auto& i : s)
	{
		if (b)
		{
			cout << i;
			b = false;
		}
		if (i == '-') {
			b = true;
		}
	}

	return 0;
}