#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, p, C, max_C = 0;
	string name, max_name;

	cin >> n;

	while (n--)
	{
		cin >> p;
		max_C = 0;
		while (p--)
		{
			cin >> C >> name;

			if (C > max_C)
			{
				max_name = name;
				max_C = C;
			}
		}
		cout << max_name << "\n";
	}

	return 0;
}