#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int A, B, C, count=0;

	cin >> A >> B >> C;
	/*
	while (A >= 0) {
		if (C - B <= 0) {
			count = -1;
			break;
		}
		else A -= (C - B), count++; 
	}
	*/

	if (C - B <= 0) {
		cout << -1 << "\n";
	}
	else {
		cout << (A / (C - B)) + 1 << "\n";
	}

	//cout << count << "\n";

	return 0;
}