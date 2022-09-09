#include <iostream>
#include <vector>
#include <string>

using namespace std;

string s;
vector<char> v;
vector<int> nv;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> s;

	string tmpS = "";

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '-' || s[i] == '+')
		{
			v.push_back(s[i]);
			nv.push_back(stoi(tmpS));
			tmpS = "";
		}
		else
		{
			tmpS += s[i];
		}
	}
	nv.push_back(stoi(tmpS));

	int result = nv[0], sum = 0, nv_index=1;
	bool minus = false;

	for (int i = 0; i < v.size(); i++)
	{
		if (minus == false)
		{
			if (v[i] == '+') {
				result += nv[nv_index++];
			}
			else
			{
				minus = true;
				sum += nv[nv_index++];
			}
		}
		else
		{
			if (v[i] == '+') {
				sum += nv[nv_index++];
			}
			else
			{
				result -= sum;
				sum = nv[nv_index++];
			}
		}
	}

	if (minus)
	{
		result -= sum;
	}

	cout << result;

	return 0;
}