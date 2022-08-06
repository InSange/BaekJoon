#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s1, s2, result="";

	cin >> s1 >> s2;

	int s1_h = stoi(s1.substr(0, 2)), s2_h = stoi(s2.substr(0, 2)), 
		s1_m = stoi(s1.substr(3, 5)), s2_m = stoi(s2.substr(3, 5)), 
		s1_s = stoi(s1.substr(6, 8)), s2_s = stoi(s2.substr(6, 8));

	s2_h -= s1_h, s2_m -= s1_m, s2_s -= s1_s;

	if (s2_s < 0)
	{
		s2_s += 60;
		s2_m -= 1;
	}
	if (s2_m < 0)
	{
		s2_m += 60;
		s2_h -= 1;
	}
	if (s2_h < 0)
	{
		s2_h += 24;
	}

	if (s2_h < 10)
	{
		result += '0' + to_string(s2_h) + ":";
	}
	else
	{
		result += to_string(s2_h) + ":";
	}
	if (s2_m < 10)
	{
		result += '0' + to_string(s2_m) + ":";
	}
	else
	{
		result += to_string(s2_m) + ":";
	}	
	if (s2_s < 10)
	{
		result += '0' + to_string(s2_s);
	}
	else
	{
		result += to_string(s2_s);
	}
	cout << result << "\n";

	return 0;
}