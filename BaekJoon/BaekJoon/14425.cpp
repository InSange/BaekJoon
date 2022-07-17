#include <iostream>
#include <string>

using namespace std;

string* s;
int c = 0;

void find(string word, int n)
{
	for (int i = 0; i < n; i++)
	{
		//if (s[i].find(word[0])) {
			if (s[i].compare(word) == 0) {
				c++;
			}
		//}
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M;

	cin >> N >> M;

	s = new string[N];
	string word;

	for (int i = 0; i < N; i++) {
		cin >> s[i];
	}

	for (int i = 0; i < M; i++) {
		cin >> word;
		find(word, N);
	}

	cout << c << "\n";

	return 0;
}