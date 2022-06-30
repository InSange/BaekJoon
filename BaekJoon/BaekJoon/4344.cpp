#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int C, N;

	cin >> C;
	double* array = new double[C];

	for (int i = 0; i < C; i++) {
		cin >> N;
		double* score = new double[N];
		double sum = 0;
		for (int j = 0; j < N; j++) {
			cin >> score[j];
			sum += score[j];
		}
		double avg = sum / N, count = 0;
		for (int j = 0; j < N; j++) {
			if (score[j] > avg) count++;
		}
		delete[] score;
		array[i] = (count / N) * 100;
	}

	for (int i = 0; i < C; i++) {
		cout << fixed;
		cout.precision(3);
		cout << array[i] << "%\n";
	}

	return 0;
}