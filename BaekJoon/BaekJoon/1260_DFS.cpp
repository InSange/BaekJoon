#include <iostream>
#include <vector>

using namespace std;

int map[1001][1001] = {};
int d_check[1001] = {};
int b_check[1001] = {};

int N, M, V;

void dfs(int start);
void bfs(int start);

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;
		map[n1][n2] = 1;
		map[n2][n1] = 1;
	}

	dfs(V);

	cout << "\n";
	bfs(V);

	return 0;
}

void dfs(int start)
{	
	int n = start;
	d_check[n] = 1;
	
	cout << n << " ";

	for (int i = 1; i <= N; i++)
	{
		if (map[n][i] == 1 && d_check[i] == 0)
		{
			dfs(i);
		}
	}
}

void bfs(int start)
{
	vector<int> v;

	int n = start, left = -1, right = 0;

	v.push_back(n);
	b_check[n] = 1;

	cout << n << " ";

	while (left < right)
	{
		left++;
		n = v[left];

		for (int i = 1; i <= N; i++)
		{
			if (map[n][i] == 1 && b_check[i] == 0)
			{
				b_check[i] = 1;
				right++;
				v.push_back(i);
				cout << i << " ";
			}
		}

	}
}