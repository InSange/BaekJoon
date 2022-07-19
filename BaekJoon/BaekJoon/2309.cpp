#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> v;

	int n, sum = 0;

	for (int i = 0; i < 9; i++) 
	{
		cin >> n;
		v.push_back(n);
		sum += n;
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < 9; i++)
	{
		for (int j = i+1; j < 9; j++)
		{
			if (sum - (v[i] + v[j]) == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k == i || k == j) continue;
					cout << v[k] << "\n";
				}
				return 0;
			}
		}
	}

	return 0;
}