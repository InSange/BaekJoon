#include <iostream>

using namespace std;

int N, M;
int arr[500002] = {};
int tmp[500002] = {};

int Lower_binary(int n, int size)
{
	int mid, start, end;

	start = 0, end = size - 1;

	while (end > start)
	{
		mid = (start + end) / 2;
		if (arr[mid] >= n)
			end = mid;
		else start = mid + 1;
	}

	return end;
}

int Uppser_binary(int n, int size)
{
	int mid, start, end;

	start = 0, end = size - 1;

	while (end > start)
	{
		mid = (start + end) / 2;
		if (arr[mid] > n)
			end = mid;
		else start = mid + 1;
	}

	return end;
}

void merge(int left, int right)
{
	int L, R, K;
	int mid = (left + right) / 2;
	L = left;
	R = mid + 1;
	K = left;

	while (L <= mid && R <= right)
	{
		if (arr[L] <= arr[R])
		{
			tmp[K++] = arr[L++];
		}
		else
		{
			tmp[K++] = arr[R++];
		}
	}

	if (L > mid)
	{
		for (int i = R; i <= right; i++)
		{
			tmp[K++] = arr[i];
		}
	}
	else
	{
		for (int i = L; i <= mid; i++)
		{
			tmp[K++] = arr[i];
		}
	}

	for (int i = left; i <= right; i++)
	{
		arr[i] = tmp[i];
	}
}

void Sorted(int left, int right)
{
	int mid = (left + right) / 2;

	if (left == right) return;

	Sorted(left, mid);
	Sorted(mid + 1, right);
	merge(left, right);
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		arr[i] = n;
	}

	Sorted(0, N - 1);

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int n;
		cin >> n;

		int lower = Lower_binary(n, N);
		int upper = Uppser_binary(n, N);
		if (upper == N - 1 && arr[upper] == n)
			upper++;

		cout << upper - lower << " ";
	}

	return 0;
}