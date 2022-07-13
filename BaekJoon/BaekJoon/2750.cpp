#include <iostream>

using namespace std;

void upsort(int N) 
{
	int array[1001] = {};
	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (array[i] > array[j])
			{
				int temp;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << array[i] << "\n";
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	upsort(N);

	return 0;
}