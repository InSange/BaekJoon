#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string T, A, B, result="";
vector<char> front, rear;
int l, r, cnt = 0;

void Front();
void Back();
void final();

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> A >> T;
	B = A;
	reverse(B.begin(), B.end());
	l = 0, r = T.size() - 1;

	while (l <= r)
	{
		if (cnt % 2 == 0) {
			Front();
		}
		else
		{
			Back();
		}
	}

	final();

	for (int i = rear.size() - 1; i >= 0; i--)
	{
		cout << rear[i];
	}

	return 0;
}

void Front()
{
	front.push_back(T[l++]);	// neto -> neto, en
	if (front.size() >= B.length())
	{
		int flag = 1;
		for (int i = 0; i < B.length(); i++)
		{
			if (B[i] != front[front.size()-i-1])
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			for (int i = 0; i < B.length(); i++)
			{
				front.pop_back();
			}
			cnt++;
		}
	}
}

void Back()
{
	rear.push_back(T[r--]);	// neto -> oten , ne
	if (rear.size() >= A.length())
	{
		int flag = 1;
		for (int i = 0; i < A.length(); i++)
		{
			if (A[i] != rear[rear.size()-i-1])
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			for (int i = 0; i < A.length(); i++)
			{
				rear.pop_back();
			}
			cnt++;
		}
	}
}

void final()
{
	while (!front.empty()) {
		rear.push_back(front.back());
		front.pop_back();

		if (rear.size() >= A.length())
		{
			int flag = 1;
			for (int i = 0; i < A.length(); i++)
			{
				if (A[i] != rear[rear.size() - 1 - i])
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				for (int i = 0; i < A.length(); i++)
				{
					rear.pop_back();
				}
			}
		}
	}
	/*
	for (int i = 0; i < front.size(); i++)
	{
		result += front[i];
	}
	for (int i = rear.size() - 1; i >= 0; i--)
	{
		result += rear[i];
	}

	while (result.find(A) != string::npos)
	{
		result.erase(result.find(A), A.size());
	}

	if(!result.empty()) cout << result << "\n";
	*/
}