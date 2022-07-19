#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int i, int j)
{
	return j < i;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, sum = 0;
	vector<int> v;
	vector<int> sortv;

	for (int i = 0; i < 8; i++) {
		cin >> n;
		v.push_back(n);
		sortv.push_back(n);
	}

	sort(sortv.begin(), sortv.end(), compare);

	for (int i = 0; i < 5; i++) {
		sum += sortv[i];
	}

	cout << sum << "\n";

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 5; j++) {
			if (sortv[j] == v[i]) cout << i+1 << " ";
		}
	}

	return 0;
}