#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;
	int array[26] = {}, max = 0, same = 0;

	cin >> s;

	for (char ch : s) {
		if ('A' <= ch && ch <= 'Z') ch += 32;
		array[ch - 97]++;
	}

	for (int i = 1; i < 26; i++) {
		if (array[i] > array[max]) max = i, same = 0;
		else if (array[i] == array[max]) same = 1;
	}

	if (same == 1) cout << '?' << "\n";
	else cout << (char)(max + 65) << endl;

	return 0;
}