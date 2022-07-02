#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int X, count = 1, i=1, j=1, ch = 0;
	cin >> X;

	while (count < X) {
		if (i == 1 && ch == 0) {
			j++;
			ch = 1;
		}
		else if (j == 1 && ch == 1) {
			i++;
			ch = 0;
		}
		else if (ch == 0) {
			j++;
			i--;
		}
		else if (ch == 1) {
			j--;
			i++;
		}
		//cout << "i : " << i << " j : " << j << "\n";
		count++;
	}

	cout << i <<"/" <<j << "\n";

	return 0;
}