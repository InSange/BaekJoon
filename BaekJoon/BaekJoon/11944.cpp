#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M, count = 0;
	vector<char> v;

	cin >> N >> M;

	string s = to_string(N);

	for (auto& i : s)
	{
		v.push_back(i);
	}


	while(1) {
		cout << v[count % v.size()];
		count++;
		if (count >= M || count >= N * v.size()) break;
	}



	return 0;
}