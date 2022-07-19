#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, v, count = 0;

	cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	cin >> v;

	for (int i = 0; i < N; i++) {
		if (v == arr[i]) count++;
	}

	cout << count << "\n";

	return 0;
}