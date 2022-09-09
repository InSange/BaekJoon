#include <iostream>
#include <algorithm>

using namespace std;

int N;
int A[51];
int B[51];

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < N; i++)
	{
		cin >> B[i];
	}

	sort(A, A + N);
	sort(B, B + N);

	int result = 0;
	for (int i = 0; i < N; i++)
	{
		result += A[i] * B[N - 1 - i];
	}

	cout << result;

	return 0;
}