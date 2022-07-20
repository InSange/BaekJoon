#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M, T;

	cin >> T;

	while (T--)
	{
		int count = 0;
		cin >> N >> M;
		string s;
		for (int i = N; i <= M; i++) {
			s = to_string(i);
			for (char c : s)
			{
				if (c == '0') count++;
			}
		}
		cout << count << "\n";
	}

	return 0;
}