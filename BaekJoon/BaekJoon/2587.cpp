#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> v;

	int n, sum=0;

	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		v.push_back(n);
		sum += n;
	}

	sort(v.begin(), v.end());

	cout << sum / 5 << "\n" << v[2] << "\n";

	return 0;
}