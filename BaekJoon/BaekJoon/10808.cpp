#include <iostream>

using namespace std;

int main()
{
	string S;
	int alphabet[26] = {};

	cin >> S;

	for (char& c : S)
	{
		alphabet[int(c - 97)]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << " ";
	}

	return 0;
}