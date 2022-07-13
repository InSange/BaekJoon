#include <iostream>
#include <vector>>
#include <algorithm>>

using namespace std;

vector<pair<int, int>> v;

bool compare(pair<int, int> v1, pair<int, int> v2)
{
	if (v1.second == v2.second)
	{
		return v1.first < v2.first;
	}
	else {
		return v1.second < v2.second;
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, x, y;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back({ x, y });
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}