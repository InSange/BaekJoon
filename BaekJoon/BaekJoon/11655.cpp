#include <iostream>
#include <string>

using namespace std;

int main()
{

	string s;
	getline(cin, s);

	for (char c : s)
	{
		if ('A' <= c && c < 'N') cout << char(c + 13);
		else if ('N' <= c && c <= 'Z') cout << char(c - 13);
		else if ('a' <= c && c < 'n') cout << char(c + 13);
		else if ('n' <= c && c <= 'z') cout << char(c - 13);
		else cout << c;
	}

	return 0;
}