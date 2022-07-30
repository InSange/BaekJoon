#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	int x1, y1, r1, x2, y2, r2;

	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int d;
		d = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));

		if (d == 0)
		{
			if (pow(r2 - r1, 2)== 0) // 원의 크기가 같고 좌표 위치가 같음.
				cout << -1 << "\n";
			else { // 원의 크기가 다름 (중심 좌표는 같으나 찾고자 하는 위치 즉 원의 반지름이 다름) 그럼 도넛모양이됨. 도넛모양은 일치하는 점이 없음.
				cout << 0 << "\n";
			}
		}
		else if (d == pow(r2 - r1, 2) || d == pow(r2 + r1, 2)) // 한 점에 인접한 원의 모형.
		{
			cout << 1 << "\n";
		}
		else if (pow(r2 - r1, 2) < d && d < pow(r2 + r1, 2)) // 원의 일부분만 서로 겹치는 부분. 원의 일부분이 서로 원 안에 들어가있음. == 만나는 점 2개
		{
			cout << 2 << "\n";
		}
		else // 원1과 원2는 서로 접점이없음. 그냥 떨어져있음. 안에 있는 것도아님 서로 독립체임.
		{
			cout << 0 << "\n";
		}
	}


	return 0;
}