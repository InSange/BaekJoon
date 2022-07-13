#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> v;

bool compare(string s1, string s2)
{
	if (s1.size() == s2.size()) return s1 < s2;
	else return s1.size() < s2.size();
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++) {
		int f = 0;
		for (int j = i-1; j >= 0; j--) {
			if (v[i] == v[j]) f++;
		}
		if (f == 0) cout << v[i] << "\n";
	}

	return 0;
}