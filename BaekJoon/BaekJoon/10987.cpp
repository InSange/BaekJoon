#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;
	cin >> s;

	int count = 0;
	for (char c : s)
	{
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') count++;
	}
	cout << count << "\n";

	return 0;
}