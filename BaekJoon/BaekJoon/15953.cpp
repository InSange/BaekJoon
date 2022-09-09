#include <iostream>

using namespace std;

int firstFest[21] = { 500,300,300,200,200,200,50,50,50,50,30,30,30,30,30,
10,10,10,10,10,10 };

int secondFest[31] = { 512,256,256,128,128,128,128,64,64,64,64,64,64,64,64,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32 };

int T, a ,b;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> T;

	while (T--)
	{
		cin >> a >> b;

		int prize = 0;

		if (a >= 1 && a <= 21)
		{
			prize += firstFest[a - 1];
		}
		if (b >= 1 && b <= 31)
		{
			prize += secondFest[b - 1];
		}

		cout << prize * 10000 << "\n";

	}

	return 0;
}