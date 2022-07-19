#include <iostream>

using namespace std;

int arr[10] = {};
int s_arr[10] = {};

void partition(int left, int right);

void merge(int left, int right);

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> arr[j];
		}
		partition(0, 9);
		cout << arr[7] << "\n";
	}

	return 0;
}

void partition(int left, int right)
{
	int mid = (left + right) / 2;

	if (left < right)
	{
		partition(left, mid);
		partition(mid + 1, right);
		merge(left, right);
	}
}

void merge(int left, int right)
{
	int mid = (left + right) / 2;

	int i = left, j = mid + 1, k = left;

	while (i <= mid && j <= right)
	{
		if (arr[i] > arr[j])
		{
			s_arr[k++] = arr[j++];
		}
		else
		{
			s_arr[k++] = arr[i++];
		}
	}

	int temp = (i > mid) ? j : i;

	while (k <= right)
	{
		s_arr[k++] = arr[temp++];
	}

	for (int t = left; t <= right; t++)
	{
		arr[t] = s_arr[t];
	}
}