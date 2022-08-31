#include <iostream>
#include <queue>

using namespace std;

struct tomato {
	int x, y;
};

int box[1001][1001], M, N, day = 0;
queue<tomato> q;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

bool IsInside(int nx, int ny)
{
	return (0 <= nx && 0 <= ny && nx < M && ny < N);
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> M >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> box[i][j];
			if (box[i][j] == 1)
			{
				q.push({ j, i });
			}
		}
	}

	while (!q.empty())
	{
		int x = q.front().x;
		int y = q.front().y;
		q.pop();
		//cout << "x : " << x << " y : " << y << "\n";

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			//cout << IsInside(nx, ny) << "\n";
			if (IsInside(nx, ny) == true && box[ny][nx] == 0)
			{
				//cout << "nx : " << nx << " ny : " << ny << "\n";
				box[ny][nx] = box[y][x] + 1;
				q.push({ nx, ny });
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (box[i][j] == 0)
			{
				cout << -1 << "\n";
				return 0;
			}
			else if (day < box[i][j])
			{
				day = box[i][j];
			}
		}
	}

	cout << day-1 << "\n";

	return 0;
}