#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, result = 0;
vector<pair<int, int>> v;

bool Sort_Second(pair<int,int> &a, pair<int,int> &b)
{
	if (a.second == b.second)
	{
		return (a.first < b.first);
	}
	return (a.second < b.second);
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int start, end;
		cin >> start >> end;
		v.push_back(make_pair(start, end));
	}

	sort(v.begin(), v.end(), Sort_Second);

	int UseRoom = v[0].second;
	result++;
	for (int i = 1; i < N; i++)
	{
		if (UseRoom <= v[i].first)
		{
			//cout << v[i].first << " " << v[i].second << "\n";
			result++;
			UseRoom = v[i].second;
		}
	}

	cout << result;

	return 0;
}