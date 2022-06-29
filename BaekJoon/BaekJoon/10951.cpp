#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio;

	int A, B;

	/*
	while (!(cin >> A >> B).eof()) {
		cout << A + B << "\n";
	}
	*/
	while (cin >> A >> B) {
		cout << A + B << "\n";
	}

	return 0;
}