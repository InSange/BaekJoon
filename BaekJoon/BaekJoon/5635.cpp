#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(tuple<string, int, int, int> &v1, tuple<string, int, int, int> &v2)
{
	if (get<3>(v1) == get<3>(v2))
	{
		if (get<2>(v1) == get<2>(v2))
		{
			return get<1>(v1) < get<1>(v2);
		}
		else
		{
			return get<2>(v1) < get<2>(v2);
		}
	}
	else
	{
		return get<3>(v1) < get<3>(v2);
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<tuple<string, int, int, int>> v;
	int n, dd, mm, yyyy;
	string name;
	cin >> n;

	while (n--)
	{
		cin >> name >> dd >> mm >> yyyy;
		v.push_back({ name, dd, mm, yyyy });
	}

	sort(v.begin(), v.end(), cmp);

	/*
	for (int i = 0; i < v.size(); i++)
	{
		cout << get<0>(v[i]) << "\n";
	}
	*/

	cout <<  get<0>(v[v.size()-1]) << "\n" << get<0>(v[0]) << "\n";

	return 0;
}