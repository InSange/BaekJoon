#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, score = 0, sum_score=0;
	cin >> n;

	string q;
	for (int i = 0; i < n; i++) {
		cin >> q;
		for (char ch : q) {
			if (ch == 'O') {
				score++;
				sum_score += score;
			}
			else score = 0;
		}
		cout << sum_score << "\n";
		score = 0, sum_score = 0;
	}

	return 0;
}