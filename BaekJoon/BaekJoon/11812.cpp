#include <iostream>

using namespace std;

long long N;
int K, Q;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N >> K >> Q;

	for (int i = 0; i < Q; i++)
	{
		long long n1, n2, count=0;
		cin >> n1 >> n2;

		if (K == 1) count = n1 < n2 ? n2 - n1 : n1 - n2;
		else
		{
			while (n1 != n2)
			{
				if (n1 < n2)
				{
					n2 = (n2 - 2) / K + 1;
				}
				else
				{
					n1 = (n1 - 2) / K + 1;
				}
				count++;
			}
		}
		cout << count << "\n";
	}

	return 0;
}