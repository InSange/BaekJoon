#include <iostream>

using namespace std;

int main()
{

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int max = 0, down, up, sum = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> down >> up;
		sum += up - down;
		if (sum > max)
		{
			max = sum;
		}
	}

	cout << max << "\n";

	return 0;
}