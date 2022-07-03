#include <iostream>
#define MAX 10002

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string A, B, sum;
	int Aa[MAX] = { 0 }, Ba[MAX] = {0}, zero=0;

	cin >> A >> B;
	if (A.size() < B.size()) {
		string temp = A;
		A = B;
		B = temp;
	}

	for (int i = A.size(); i > 0; i--) {
		Aa[i - 1] = A[A.size() - i] -'0';
	}

	for (int i = B.size(); i > 0; i--) {
		Ba[i - 1] = B[B.size() - i] - '0';
	}

	for (int i = 0; i < A.size(); i++) {
		Aa[i] += Ba[i];
		if (Aa[i] >= 10) {
			Aa[i] -= 10;
			Aa[i + 1]++;
		}
	}

	if (Aa[A.size()] != 0) cout << Aa[A.size()], zero=1;

	for (int i = A.size() - 1; i >= 0; i--) {
		if (zero == 0 && Aa[i] ==0) {
			continue;
		}
		else if (zero == 0 && Aa[i] != 0) {
			zero = 1;
		}
		cout << Aa[i];

	}


	return 0;
}