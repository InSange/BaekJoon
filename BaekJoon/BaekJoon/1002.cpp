#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	int x1, y1, r1, x2, y2, r2;

	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int d;
		d = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));

		if (d == 0)
		{
			if (pow(r2 - r1, 2)== 0) // ���� ũ�Ⱑ ���� ��ǥ ��ġ�� ����.
				cout << -1 << "\n";
			else { // ���� ũ�Ⱑ �ٸ� (�߽� ��ǥ�� ������ ã���� �ϴ� ��ġ �� ���� �������� �ٸ�) �׷� ���Ӹ���̵�. ���Ӹ���� ��ġ�ϴ� ���� ����.
				cout << 0 << "\n";
			}
		}
		else if (d == pow(r2 - r1, 2) || d == pow(r2 + r1, 2)) // �� ���� ������ ���� ����.
		{
			cout << 1 << "\n";
		}
		else if (pow(r2 - r1, 2) < d && d < pow(r2 + r1, 2)) // ���� �Ϻκи� ���� ��ġ�� �κ�. ���� �Ϻκ��� ���� �� �ȿ� ������. == ������ �� 2��
		{
			cout << 2 << "\n";
		}
		else // ��1�� ��2�� ���� �����̾���. �׳� ����������. �ȿ� �ִ� �͵��ƴ� ���� ����ü��.
		{
			cout << 0 << "\n";
		}
	}


	return 0;
}