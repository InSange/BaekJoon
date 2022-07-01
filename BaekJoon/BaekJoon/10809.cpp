#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int check[26] = {}, count=0;

	string s;
	cin >> s;

	for (int i = 0; i < 26; i++) {
		check[i] = -1;
	}

	for (char ch : s) {
		if (check[ch - 97] == -1) check[ch - 97] = count;
		count++;
	}

	for (int i = 0; i < 26; i++) {
		cout << check[i] << " ";
	}

	return 0;
}