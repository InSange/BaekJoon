#include <iostream>

using namespace std;

int* arr;
int* sortarr;

void partition(int left, int right);
void merge(int left, int right);
void find_s(int n, int left, int right);

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M;

	cin >> N; 

	arr = new int[N];
	sortarr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	partition(0, N-1);

	cin >> M;

	for (int i = 0; i < M; i++) {
		int n;
		cin >> n;
		find_s(n, 0, N);
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

	int i, j, k, temp;
	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right) 
	{
		if (arr[i] < arr[j])
		{
			sortarr[k++] = arr[i++];
		}
		else
		{
			sortarr[k++] = arr[j++];
		}
	}

	temp = (i <= mid) ? i : j;

	while (k <= right) sortarr[k++] = arr[temp++];
	
	for (int t = left; t <= right; t++) arr[t] = sortarr[t];
}

void find_s(int n, int left, int right)
{
	int low = left;
	int high = right-1;
	int mid;
	while (low <= high) {
		mid =(low + high) / 2;

		if (arr[mid] == n)
		{
			cout << 1 << "\n";
			return;
		}
		else if (arr[mid] < n)
		{
			low = mid + 1;
		}
		else if (arr[mid] > n)
		{
			high = mid - 1;
		}
	}
	cout << 0 << "\n";
	return;
}