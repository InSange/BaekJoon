#include <iostream>
#include <algorithm>

using namespace std;

int N, M, cnt = 0;
string no_hear[500001];
string find_name[500001];

bool BinaryFind(string s, int size)
{
	int start = 0;
	int end = size - 1;
	int mid;

	while (end >= start)
	{
		mid = (start+end) / 2;

		if (no_hear[mid] == s)
		{
			find_name[cnt++] = s;
			return true;
		}
		else if (no_hear[mid] < s)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return false;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> no_hear[i];
	}

	sort(no_hear, no_hear + N);

	for (int i = 0; i < M; i++)
	{
		string s;
		cin >> s;

		BinaryFind(s, N);
	}

	cout << cnt << "\n";

	sort(find_name, find_name + cnt);

	for (int i = 0; i < cnt; i++)
	{
		cout << find_name[i] << " ";
	}

	return 0;
}