#include <iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;

	string x, y;
	while (N--) {
		cin >> x >> y;

		cout << "Distances: ";
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] <= y[i]) cout << int(y[i] - x[i]) << " ";
			else cout << int(y[i] - x[i]) + 26 << " ";
		}
		cout << "\n";
	}

	return 0;
}