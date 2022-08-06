#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T, N, C;
	float G;

	cin >> T;

	while (T--)
	{
		cin >> N;
		int sum = 0;
		float avg = 0;
		for(int i = 0; i < N; i++)
		{
			cin >> C >> G;
			sum += C;
			avg += C*G;
		}
		avg = round(avg * 10 / sum);

		if (avg == 0)
		{
			cout << sum << " " << "0.0" << "\n";
		}
		else {
			cout << sum << " " << avg / 10 << "\n";
		}
	}

	return 0;
}