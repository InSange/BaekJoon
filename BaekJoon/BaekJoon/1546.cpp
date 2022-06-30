#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;

	cin >> N;

	double* array = new double[N];
	double max = 0, sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> array[i];
		if (max < array[i]) max = array[i];
	}

	for (int i = 0; i < N; i++) {
		array[i] = round((array[i] / max) * 100);
		sum += array[i];
	}

	std::cout.precision(-2);
	cout << sum/N << "\n";

	return 0;
}