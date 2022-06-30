#include <iostream>
#define RANGE 1000

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int array[RANGE] = {}, n = 42, count = 0;

	for (int i = 0; i < 10; i++) {
		int num;
		cin >> num;

		if (array[num % 42] == 0) {
			array[num % 42]++;
			count++;
		}
	}

	cout << count << "\n";

	return 0;
}