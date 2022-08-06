#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;
	vector<char> v;
	int result = 0, sum=1;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
		{
			sum *= 2;
			v.push_back(s[i]);
		}
		else if (s[i] == '[')
		{
			sum *= 3;
			v.push_back(s[i]);
		}
		else if (s[i] == ')')
		{
			if (v.size() == 0 || v.back() != '(')
			{
				result = 0;
				break;
			}
			if (s[i-1] == '(')
			{
				result += sum;
				sum /= 2;
				v.pop_back();
			}
			else
			{
				sum /= 2;
				v.pop_back();
			}
		}
		else if (s[i] == ']')
		{
			if (v.size() == 0 || v.back() != '[')
			{
				result = 0;
				break;
			}
			if (s[i-1] == '[')
			{
				result += sum;
				sum /= 3;
				v.pop_back();
			}
			else
			{
				sum /= 3;
				v.pop_back();
			}
		}
		//cout << "s[" << i << "] : " << s[i] << " sum : " << sum << " result : " << result <<"\n";
	}

	if (v.size() != 0) {
		result = 0;
	}

	cout << result;

	return 0;
}