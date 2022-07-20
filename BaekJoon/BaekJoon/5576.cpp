#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> W, K;

	int num;

	for (int i = 0; i < 20; i++) {
		cin >> num;
		if (i < 10) W.push_back(num);
		else K.push_back(num);
	}

	sort(W.begin(), W.end());
	sort(K.begin(), K.end());

	cout << W[7] + W[8] + W[9] << " " << K[7] + K[8] + K[9] << "\n";


	return 0;
}