#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);

	ios::sync_with_stdio(false);

	int arr[3] = {}, size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}