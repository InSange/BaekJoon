#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, front = 0, back = 0;

	cin >> N;

	int* Queue = new int[N];

	string s;

	for (int i = 0; i < N; i++)
	{
		cin >> s;
		if (s == "push")
		{
			cin >> Queue[back++];
		}
		else if (s == "front")
		{
			if (back == front) {
				cout << -1 << "\n";
			}
			else {
				cout << Queue[front] << "\n";
			}
		}
		else if (s == "back")
		{
			if (back == front) {
				cout << -1 << "\n";
			}
			else {
				cout << Queue[back-1] << "\n";
			}
		}
		else if (s == "pop")
		{
			if (back - front != 0) {
				cout << Queue[front++] << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (s == "empty")
		{
			if (front == back) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (s == "size")
		{
			cout << back - front << "\n";
		}
	}

	return 0;
}