#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int A, B, count = 0, start=1, sum =0;

	cin >> A >> B;

	while (count < B)
	{
		for (int i = 1; i <= start; i++)
		{
			count++;
			if (count > B) break;
			if (count >= A) sum += start;
		}
		start++;
	}

	cout << sum << "\n";

	return 0;
}