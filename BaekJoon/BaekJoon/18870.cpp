#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, n;

	cin >> N;

	vector<int> x;
	vector<int> sortx;

	for (int i = 0; i < N; i++) {
		cin >> n;
		x.push_back(n);
		sortx.push_back(n);
	}

	sort(sortx.begin(), sortx.end());
	sortx.erase(unique(sortx.begin(), sortx.end()), sortx.end());

	for (int j = 0; j < N; j++) {
		cout << lower_bound(sortx.begin(), sortx.end(), x[j]) - sortx.begin() << " ";
	}

	return 0;
}