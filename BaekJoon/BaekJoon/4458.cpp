#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	cin.ignore();
	string s;

	for (int i = 0; i <= N; i++) {
		getline(cin, s);
		if ('a' <= s[0] && s[0] <= 'z') s[0] = s[0] - 32;
		cout << s << "\n";
	}


	return 0;
}