#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;

	cin >> N;

	int *array = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}
	int Max = array[0], min = array[0];

	for (int i = 1; i < N; i++) {
		if (array[i] > Max) Max = array[i];
		else if (array[i] < min) min = array[i];
	}

	cout << min << " " << Max << "\n";

	delete[] array;

	return 0;
}