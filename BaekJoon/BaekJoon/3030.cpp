#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int arr[10] = { 1,1,2,2,2,8 };

	for (int i = 0; i < 6; i++)
	{
		int n;
		cin >> n;
		cout << arr[i] - n << " ";
	}
	cout << "\n";

	return 0;
}