#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;
	cin >> s;
	int count = 1;

	for (auto i : s)
	{
		if (i == ',') count++;
	}

	cout << count << "\n";

	return 0;
}