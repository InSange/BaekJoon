#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, result=0;

	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		result += n * n;
	}

	cout << result % 10 << "\n";

	return 0;
}