#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T, H, W, N, room;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;

		if (N % H == 0) room = (H * 100) + ((N / H));
		else {
			room = ((N % H) * 100) + ((N / H) + 1);
		}

		cout << room << "\n";
	}

	return 0;
}