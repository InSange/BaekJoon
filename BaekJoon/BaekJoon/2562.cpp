#include <iostream>
#define SIZE 9

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int *array = new int[SIZE];

	for (int i = 0; i < SIZE; i++) {
		cin >> array[i];
	}

	int max = array[0], index = 1;

	for (int i = 0; i < SIZE; i++) {
		if (array[i] > max) {
			max = array[i];
			index = i + 1;
		}
	}

	cout << max << "\n" << index << "\n";

	delete[] array;

	return 0;
}