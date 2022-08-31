#include <iostream>
#include <algorithm>

using namespace std;
//					 0  1  2  3
int arr[1000001] = { 0, 0, 1, 1 };

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 4; i <= N; i++)
	{
		arr[i] = arr[i - 1] + 1;

		if (i % 2 == 0) arr[i] = min(arr[i], arr[i / 2] + 1);
		if (i % 3 == 0) arr[i] = min(arr[i], arr[i / 3] + 1);
	}
	cout << arr[N] << "\n";

	return 0;
}