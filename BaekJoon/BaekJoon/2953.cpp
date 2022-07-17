#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int arr[5] = {}, winner = 0, winner_score = 0;

	for (int i = 0; i < 5; i++)
	{
		int s1, s2, s3, s4, sum = 0;;
		cin >> s1 >> s2  >> s3 >> s4;
		sum += s1 + s2 + s3 + s4;
		if (winner_score < sum)
		{
			winner_score = sum;
			winner = i + 1;
		}
	}

	cout << winner << " " << winner_score << "\n";

	return 0;
}