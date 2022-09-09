#include <iostream>
#include <queue>
#include <string>

using namespace std;

int N, M;

int arr[101][101];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = {0, 0, 1, -1};

struct pos
{
	int x, y;
};

queue<pos> q;

bool IsInside(int nx, int ny)
{
	return (0 <= nx && 0 <= ny && ny < N&& nx < M);
}

void find_set()
{
	while (!q.empty())
	{
		int x = q.front().x;
		int y = q.front().y;

		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (IsInside(nx, ny)  == true && arr[ny][nx] == 1)
			{
				arr[ny][nx] = arr[y][x] + 1;
				q.push({ nx, ny });
			}
		}
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < M; j++)
		{
			arr[i][j] = s[j] - '0';
		}
	}

	q.push({ 0, 0 });
	find_set();

	cout << arr[N-1][M-1] << "\n";

	return 0;
}