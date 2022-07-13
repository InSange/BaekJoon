#include <iostream>

using namespace std;

int* x= new int;
int* y= new int;
int* x1;
int* ty;

void merge(int left, int right)
{
	int mid = (left + right) / 2;

	int i = left;
	int j = mid + 1;
	int k = left;
	while (i <= mid && j <= right)
	{
		if (x[i] < x[j])
		{
			x1[k] = x[i];
			ty[k] = y[i];
			k++;
			i++;
		}
		else if (x[i] == x[j]) {
			if (y[i] <= y[j]) {
				x1[k] = x[i];
				ty[k] = y[i];
				k++;
				i++;
			}
			else {
				x1[k] = x[j];
				ty[k] = y[j];
				k++;
				j++;
			}
		}
		else {
			x1[k] = x[j];
			ty[k] = y[j];
			k++;
			j++;
		}
	}
	int t = i > mid ? j : i;
	while (k <= right) {
		x1[k] = x[t];
		ty[k] = y[t];
		k++;
		t++;
	}

	for (int i = left; i <= right; i++)
	{
		x[i] = x1[i];
		y[i] = ty[i];
	}
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

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;

	cin >> N;

	x1 = new int[N];
	ty = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
	}

	for (int i = 0; i < N; i++) {
		x1[i] = 0;
		ty[i] = 0;
	}

	partition(0, N-1);

	for (int i = 0; i < N; i++) {
		cout << x[i] << " " << y[i] << "\n";
	}

	return 0;
}