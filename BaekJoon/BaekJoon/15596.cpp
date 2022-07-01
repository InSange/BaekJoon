#include <iostream>
#include <vector>

using namespace std;

long long sum(vector<int>& a)
{
	long long vsum = 0;

	for (int i = 0; i < a.size(); i++) {
		vsum += a[i];
	}

	return vsum;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> a;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		a.push_back(num);
	}

	long result = sum(a);
	cout << result << "\n";

	return 0;
}