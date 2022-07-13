#include <iostream>
#include <cmath>

using namespace std;

int num[8002] = {};

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, bin=0, binC = 0, count = 0, center, min = 8000, max = 0 ;
	double sum = 0;

	cin >> N;

	int* array = new int[N];
	
	for (int i = 0; i < N; i++) {
		cin >> array[i];
		num[array[i]+4000]++;
		sum += array[i];
	}

	for (int i = 0; i < 8002; i++) {
		if (num[bin] < num[i]) {
			bin = i;
			binC = 0;
		}
		if (num[bin] == num[i]) {
			binC++;
			if (binC == 2) bin = i;
		}
		if (num[i] > 0 && count <((N+1)/2)) {
			count+=num[i];
			center = i;
		}
		if (num[i] > 0 && max < i) max = i;
		if (num[i] > 0 && min > i) min = i;
	}

	double rsum = round(sum / N);

	if(rsum == -0){
		cout << 0 << "\n";
	}
	else {
		cout << rsum << "\n";
	}
	cout << center-4000 << "\n";
	cout << bin - 4000 << "\n";
	cout << (max-4000) - (min-4000) << "\n";


	return 0;
}