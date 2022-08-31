#include <iostream>

using namespace std;

int arr[1001], tmp[1001];

void merge(int left, int right)
{
	int L, R, k;
	int mid = (left + right) / 2;
	L = left;
	R = mid + 1;
	k = left;
	while (L <= mid && R <= right)
	{
		tmp[k++] = arr[L] <= arr[R] ? arr[L++] : arr[R++];
	}

	if (L > mid)
	{
		for (int i = R; i <= right; i++)
		{
			tmp[k++] = arr[i];
		}
	}
	else
	{
		for (int i = L; i <= mid; i++)
		{
			tmp[k++] = arr[i];
		}
	}

	for (int i = left; i <= right; i++)
	{
		arr[i] = tmp[i];
	}
}

void sort_arr(int left, int right)
{
	if (left == right) return;
	int mid = (left + right) / 2;
	sort_arr(left, mid);
	sort_arr(mid + 1, right);
	merge(left, right);
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, k, count = 0;

	cin >> N >> k;

	for (int i = 0; i < N; i++)
	{
		int score;
		cin >> score;

		arr[i] = score;
	}

	sort_arr(0, N - 1);

	for (int i = N-1; i >= 0; i--)
	{
		count++;
		if (count == k)
		{
			cout << arr[i] << "\n";
			break;
		}
	}

	return 0;
}