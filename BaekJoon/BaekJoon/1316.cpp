#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		int array[26] = {}, condition = 0;
		array[s[0] - 97]++;
		for (int j = 1; j < s.size(); j++) {
			if (s[j - 1] != s[j]) array[s[j] - 97]++;
		}
		for (int k = 0; k < 26; k++) {
			if (array[k] >= 2) {
				condition = 1;
				break;
			}
		}
		if (condition == 0) count++;
	}

	cout << count << "\n";

	return 0;
}