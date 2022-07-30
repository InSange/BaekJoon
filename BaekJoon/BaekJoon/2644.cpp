#include <iostream>
#include <vector>

using namespace std;

int rel[101][101] = {};
int check[101] = {};

int N, f1, f2, M, cnt = 0, front = -1, rear = 0;

vector<int> v;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N >> f1 >> f2 >> M;

	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		rel[x][y] = 1;
		rel[y][x] = 1;
	}

	check[f1] = 0;
	v.push_back(f1);

	while (front < rear)
	{
		int n = v[++front];
		for (int i = 1; i <= N; i++)
		{
			if (rel[n][i] == 1 && check[i] == 0)
			{
				check[i] = check[n]+1;
				v.push_back(i);
				rear++;
			}
		}
	}

	if (check[f2] == 0)
	{
		cout << -1 << "\n";
	}
	else {
		cout << check[f2] << "\n";
	}

	return 0;
}