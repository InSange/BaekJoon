#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;
	getline(cin, s);

	int count = 0, blank=1;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ' && blank == 1) count++, blank=0;
		else if (s[i] == ' ') blank = 1;
	}
	cout << count << "\n";

	return 0;
}