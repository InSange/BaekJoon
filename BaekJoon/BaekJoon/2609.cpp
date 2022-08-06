#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int m_g(int n1,int n2)
{
	int n3 = n2 % n1;
	while (n3 != 0)
	{
		n2 = n1;
		n1 = n3;
		n3 = n2 % n1;
	}
	return n1;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n1, n2, min = 10000, max = 0;
	cin >> n1 >> n2;

	if (n1 > n2) {
		swap(n1, n2);
	}

	max = m_g(n1, n2);

	min = n2 * n1 / max;

	cout << max << "\n" << min;

	return 0;
}