#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int V, A, B, day = 1;

	cin >> A >> B >> V;
	
	day += (V - A) / (A - B);
	if ((V - A) % (A - B) != 0) day++;
	if (V <= A) {
		cout << day << "\n";
	}
	else {
		cout << day << "\n";
	}

	return 0;
}