#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int Rev(int n)
{
	vector<int> v;

	while (n != 0)
	{
		v.push_back(n % 10);
		n /= 10;
	}

	int sum = 0;
	for (int i = 0; i < v.size(); i++) {
		sum += v[i] * pow(10, (v.size() - i - 1));
	}

	return sum;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int X, Y;

	cin >> X >> Y;

	cout << Rev(Rev(X)+Rev(Y));

	return 0;
}