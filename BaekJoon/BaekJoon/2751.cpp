#include <iostream>

int* a1;
int* a2;
using namespace std;

void merge(int front, int end)
{
	int mid = (front + end) / 2;

	int i = front;
	int j = mid+1;
	int n = front;

	while (i <= mid && j <= end) {
		if (a1[i] <= a1[j]) a2[n++] = a1[i++];
		else a2[n++] = a1[j++];
	}

	int tmp = i > mid ? j : i;

	while (n <= end) a2[n++] = a1[tmp++];

	for (int k = front; k <= end; k++) a1[k] = a2[k];

}

void partition(int front, int end)
{
	if (front < end)
	{
		int mid = (front + end) / 2;
		partition(front, mid);
		partition(mid+1, end);
		merge(front, end);
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	a1 = new int[N];
	a2 = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> a1[i];
	}

	partition(0, N-1);

	for (int i = 0; i < N; i++)
	{
		cout << a1[i] << "\n";
	}

	return 0;
}