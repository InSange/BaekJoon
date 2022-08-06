#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	while (N--)
	{
		int c, v;
		cin >> c >> v;

		cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s).\n";
	}

	return 0;
}