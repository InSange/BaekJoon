#include <iostream>

using namespace std;

int T, Button[3] = {300, 60, 10}, A =0, B=0, C=0;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> T;

	if (T >= Button[0])
	{
		A = T / Button[0];
		T -= Button[0] * A;
	}
	if(T >= Button[1])
	{
		B = T / Button[1];
		T -= Button[1] * B;
	}
	if (T >= Button[2])
	{
		C = T / Button[2];
		T -= Button[2] * C;
	}

	if (T == 0)
	{
		cout << A << " " << B << " " << C;
	}
	else
	{
		cout << -1;
	}

	return 0;
}