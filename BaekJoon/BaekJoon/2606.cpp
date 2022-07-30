#include <iostream>
#include <vector>

using namespace std;

int com[101][101] = {};
int check[101] = {};

int N, M, top = 0, c = 0;

vector<int> v;

int main()
{
	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int x, y;
		cin >> x >> y;
		com[x][y] = 1;
		com[y][x] = 1;
	}

	v.push_back(1);
	check[1] = 1;

	while (top < v.size())
	{
		int num = v[top++];

		//cout << "num : " << num << "\n";

		for (int i = 1; i <= N; i++)
		{
			if (com[num][i] == 1 && check[i] == 0)
			{
				check[i] = 1;
				v.push_back(i);
				c++;
			}
		}
	}

	cout << c << "\n";

	return 0;
}