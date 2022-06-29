#include <iostream>

using namespace std;

int main()
{
	int H, M, N;

	cin >> H >> M >> N;

	M += N;

	if (M >= 60) {
		H += M/60;
		M -= 60*(M/60);
	}

	if (H >= 24) {
		H -= 24*(H/24);
	}

	cout << H << " " << M << endl;

	return 0;
}