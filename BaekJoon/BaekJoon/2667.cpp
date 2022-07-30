#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int check[30][30] = {};
string map[30] = {};

int N, cnt;

int x[4] = { 0, 0, 1, -1 };
int y[4] = { 1, -1, 0, 0 };

vector<int> v;

void find(int n1, int n2)
{
	map[n1][n2] = '0';
	cnt++;

	for (int i = 0; i < 4; i++)
	{
		int next_x = n1 + x[i];
		int next_y = n2 + y[i];

		if (next_x >= 0 && next_x < N && next_y >= 0 && next_y < N)
		{
			if (map[next_x][next_y] == '1') {
				find(next_x, next_y);
			}
		}
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> map[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] == '1') {
				cnt = 0;
				find(i, j);
				v.push_back(cnt);
			}
		}
	}

	cout << v.size() << "\n";
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}

	return 0;
}