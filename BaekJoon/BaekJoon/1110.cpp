#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N1, N2, start, count = 0;
	cin >> N1;
	start = N1;
	while (true) {
		N2 = (N1 / 10) + (N1 % 10);
		N1 = (N1 % 10 * 10) + (N2%10);
		//cout << "N1 : " << N1 <<", N2 : " << N2 << "\n";
		count++;
		if (N1 == start) break;
	}
	cout << count << "\n";

	return 0;
}