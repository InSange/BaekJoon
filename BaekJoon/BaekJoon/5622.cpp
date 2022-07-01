#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;

	cin >> s;

	int t = 0;

	for (int i = 0; i < s.size(); i++) {
		if ('A' <= s[i] && s[i] <= 'C') t += 3;
		else if ('D' <= s[i] && s[i] <= 'F') t += 4;
		else if ('G' <= s[i] && s[i] <= 'I') t += 5;
		else if ('J' <= s[i] && s[i] <= 'L') t += 6;
		else if ('M' <= s[i] && s[i] <= 'O') t += 7;
		else if ('P' <= s[i] && s[i] <= 'S') t += 8;
		else if ('T' <= s[i] && s[i] <= 'V') t += 9;
		else if ('W' <= s[i] && s[i] <= 'Z') t += 10;
	}

	cout << t << "\n";

	return 0;
}