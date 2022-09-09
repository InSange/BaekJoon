#include <iostream>
#include <algorithm>

using namespace std;

int N;
long long result = 0;
int arr[500001];
int arr2[500001];

void Merge(int left, int right)
{
	int i, j, k, mid;
	long long cnt = 0;
	mid = (left + right)/2;
	i = left;
	j = mid + 1;
	k = left;
	while (i <= mid && j <= right)
	{
		if (arr[i] <= arr[j])
		{
			arr2[k++] = arr[i++];
			result += cnt;
		}
		else
		{
			arr2[k++] = arr[j++];
			cnt++;
		}
	}

	if (i > mid)
	{
		while (k <= right)
		{
			arr2[k++] = arr[j++];
		}
	}
	else
	{
		while (k <= right)
		{
			arr2[k++] = arr[i++];
			result += cnt;
		}
	}

	for (int l = left; l <= right; l++)
	{
		arr[l] = arr2[l];
	}
}


void Merge_Sort(int left, int right)
{
	if (left == right)
		return;
	int mid = (left + right) / 2;
	Merge_Sort(left, mid);
	Merge_Sort(mid + 1, right);
	Merge(left, right);
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

	cout << result;

	return 0;
}