#include <iostream>

using namespace std;

int* NM;
int* sorta;
int* NA;

void merge(int left, int right)
{
	int mid = (left + right) / 2;

	int i, j, k, temp;
	i = left;
	j = mid+1;
	k = left;

	while (i <= mid && j <= right) {
		if (NA[i] < NA[j]) {
			sorta[k++] = NA[i++];
		}
		else {
			sorta[k++] = NA[j++];
		}
	}

	temp = (i <= mid) ? i : j;

	while (k <= right) {
		sorta[k++] = NA[temp++];
	}

	for (int t = left; t <= right; t++) {
		NA[t] = sorta[t];
	}

}

void partition(int left, int right)
{
	int mid = (left + right) / 2;
	if (left < right) {
		partition(left, mid);
		partition(mid + 1, right);
		merge(left, right);
	}
}

void binary_find(int n, int left, int right)
{
	int mid = (left + right) / 2;
	if (NA[mid] == n) {
		cout << 1 << " ";
	}
	else {
		if (mid == left)
		{
			if (NA[mid] == n) cout << 1 << " ";
			else cout << 0 << " ";
		}
		else {
			if (NA[mid] < n) {
				binary_find(n, mid + 1, right);
			}
			else {
				binary_find(n, left, mid);
			}
		}
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M;

	cin >> N;

	NA = new int[N];
	sorta = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> NA[i];
	}

	partition(0, N - 1);

	/*
	for (int i = 0; i < N; i++) {
		cout << NA[i] << " ";
	}
	cout << "\n";
	*/

	cin >> M;

	NM = new int[M];
	for (int i = 0; i < M; i++) {
		cin >> NM[i];
		binary_find(NM[i], 0, N);
	}

	return 0;
}