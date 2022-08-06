#include <iostream>
#include <math.h>

using namespace std;

/*
double m_sqrt(double n)
{
	double s = 0;
	double t = 0;

	s = n / 2;
	for (; s != t;)
	{
		t = s;
		s = ((n / t) + t) / 2;
	}
	return s;
}
*/

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int M, N, sum = 0, min = 10000, count=0;

	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		int n = sqrt(i);
		if (pow(n,2) == i)
		{
			count++;
			sum += i;
			if (min > i)
			{
				min = i;
			}
		}
	}

	if (count == 0)
	{
		cout << -1 << "\n";
	}
	else
	{
		cout << sum << "\n" << min << "\n";
	}

	return 0;
}