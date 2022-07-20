#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;

	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (i % 10 == 0 && i != 0) cout << "\n";
		cout << s[i];
	}
	
	return 0;
}