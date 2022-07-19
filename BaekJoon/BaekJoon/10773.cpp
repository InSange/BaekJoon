#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int K, n, sum=0;
	vector<int> v;

	cin >> K;
	for (int i = 0; i < K; i++)
	{
		cin >> n;
		if (n != 0) v.push_back(n);
		else v.pop_back();
	}

	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}

	cout << sum << "\n";

	return 0;
}