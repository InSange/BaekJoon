#include <iostream>
#include <string>

using namespace std;
/*
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int A, B, C, array[10]{}, gop;

	cin >> A >> B >> C;
	gop = A * B * C;

	int rest = gop % 10;
	array[rest]++;
	while (gop/10 != 0) {
		gop = gop / 10;
		rest = gop % 10;
		array[rest]++;
	}
	
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		cout << array[i] << "\n";
	}
	
	//cout << sizeof(array)/10 << "\n";

	return 0;
}
*/

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int array[10] = {};

	int a, b, c;

	cin >> a >> b >> c;

	int res = a * b * c;

	string s = to_string(res);

	for (char ch : s) {
		array[ch - '0']++;
		cout << ch - '0' << "\n";
	}

	return 0;
}