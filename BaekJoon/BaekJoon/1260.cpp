#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int in, out, max = 0, man=0;

	for (int i = 0; i < 10; i++)
	{
		cin >> out >> in;
		man = man + in - out;
		if (man > max) max = man;
	}
	cout << max << "\n";

	return 0;
}