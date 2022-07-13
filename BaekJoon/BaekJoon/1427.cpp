#include <iostream>


using namespace std;

int main()
{
	cin.tie(NULL);

	ios::sync_with_stdio(false);

	string s;

	cin >> s;
	
	for (int i = 0; i < s.size()-1; i++) {
		for (int j = i + 1; j < s.size(); j++) {
			if (s[i] < s[j]) {
				char t = s[i];
				s[i] = s[j];
				s[j] = t;
			}
		}
	}

	cout << s << "\n";

	return 0;
}