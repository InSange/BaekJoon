#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T, R;
	string S;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> R >> S;
		for (char ch : S) {
			for (int i = 0; i < R; i++) {
				cout << ch;
			}
		}
		cout << endl;
	}

	return 0;
}