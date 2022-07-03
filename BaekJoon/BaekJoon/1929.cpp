#include <iostream>
#define MAX 1000001

using namespace std;


int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int M, N;
	cin >> M >> N;

	bool array[1000001];

	for (int i = 2; i < N+1; i++) {
		array[i] = 1;
	}

	for (int i = 2; i * i <= N; i++) {
		if (array[i] == 1) {
			for (int j = i * i; j <= N; j += i) {
				array[j] = 0;
			}
		}
	}

	for (int i = M; i < N+1; i++) {
		if (array[i] == 1) {
			cout << i << "\n";
		}
	}

	return 0;
}