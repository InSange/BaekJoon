#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string a, b, ca, cb;

	cin >> a >> b;

	for (int i = a.size()-1; i >= 0; i--) {
		ca += a[i];
		cb += b[i];
	}

	if (ca > cb) cout << ca << "\n";
	else cout << cb << "\n";

	return 0;
}