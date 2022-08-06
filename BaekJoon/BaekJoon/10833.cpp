#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, sum=0;

	cin >> N;

	while (N--)
	{
		int apple, student;
		cin >> student >> apple;

		sum += apple - (student * (apple / student));
	}

	cout << sum << "\n";

	return 0;
}