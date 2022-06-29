#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, X;

	cin >> N >> X;
	int *A = new int[N];
	
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		A[i] = num;
	}

	for (int i = 0; i < N; i++) {
		if(A[i] < X ) cout << A[i] << " ";
	}
	cout << "\n";

	return 0;
}