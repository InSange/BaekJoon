#include <iostream>

using namespace std;

int professor(int n, int count)
{
	string s = "";
	for (int i = 0; i < count; i++) {
		s += "____";
	}

	cout << s + "\"����Լ��� ������?\"" << "\n";
	if (n == 0) {
		cout << s+"\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << "\n";
		cout << s + "��� �亯�Ͽ���." << "\n";
		return 0;
	}
	else {
		cout << s + "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n"
			<< s+"���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n"
			<< s+ "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << "\n";
		professor(n-1, count+1);
		cout << s + "��� �亯�Ͽ���." << "\n";
	}
	return 0;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, count=0;

	cin >> n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << "\n";
	professor(n,count);

	return 0;
}