#include <iostream>

using namespace std;

int main()
{
	int sum, n;
	cin >> sum;

	for (int i = 0; i < 9; i++)
	{
		cin >> n;
		sum -= n;
	}
	
	cout << sum << "\n";

	return 0;
}