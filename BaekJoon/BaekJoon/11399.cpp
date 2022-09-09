#include <iostream>

using namespace std;

int arr[1002];
int tmp[1002];
int t[1002];
int N;

void Sort(int left, int right)
{
	int i, j, k, mid;
	mid = (left + right) / 2;
	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right)
	{
		if (arr[i] <= arr[j])
		{
			tmp[k++] = arr[i++];
		}
		else
		{
			tmp[k++] = arr[j++];
		}
	}

	if (i > mid)
	{
		while (j <= right)
		{
			tmp[k++] = arr[j++];
		}
	}
	else
	{
		while (i <= mid)
		{
			tmp[k++] = arr[i++];
		}
	}

	for (int l = 0; l <= right; l++)
	{
		arr[l] = tmp[l];
	}
}

void Merge_Sort(int left, int right)
{
	int mid = (left + right) / 2;
	if (left == right)
		return;
	Merge_Sort(left, mid);
	Merge_Sort(mid + 1, right);
	Sort(left, right);
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	Merge_Sort(0, N - 1);

	t[0] = arr[0];
	int result = t[0];
	for (int i = 1; i < N; i++)
	{
		t[i] = arr[i] +  t[i - 1];
		result += t[i];
	}

	cout << result << "\n";

	return 0;
}