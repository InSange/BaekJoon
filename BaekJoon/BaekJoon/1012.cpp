#include <iostream>
#include <queue>

using namespace std;

int T, M, N, K, cnt;
int arr[51][51];
int check[51][51];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
queue<pair<int, int>> q;

bool InRange(int nx, int ny)
{
	return (0 <= nx && nx < M && 0 <= ny && ny < N);
}

void dfs(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (InRange(nx, ny) && check[ny][nx] == false && arr[ny][nx]==1)
		{
			check[ny][nx] = true;
			dfs(nx, ny);
		}
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> T;
	while (T--)
	{
		cin >> M >> N >> K;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				arr[i][j] = 0;
				check[i][j] = 0;
			}
		}

		for (int i = 0; i < K; i++)
		{
			int x, y;
			cin >> x >> y;
			arr[y][x] = 1;
			q.push(make_pair(y, x));
		}

		cnt = 0;
		while (!q.empty())
		{
			int x = q.front().second;
			int y = q.front().first;

			if (check[y][x] == false) {
				//cout << "이것은 테스트 : " << x << " " << y << "\n";
				check[y][x] = true;
				cnt++;
				dfs(x, y);
			}

			q.pop();
		}

		cout << cnt << "\n";
	}

	return 0;
}