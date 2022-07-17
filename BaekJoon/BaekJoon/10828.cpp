#include <iostream>
#include <vector>

using namespace std;

class stack {
public:
	vector<int> v;

	void push(int num) {
		v.push_back(num);
	}
	void pop()
	{
		if (v.size() == 0) cout << -1 << "\n";
		else {
			cout << v.back() << "\n";
			v.pop_back();
		}
	}
	void size()
	{
		cout << v.size() << "\n";
	}
	void empty()
	{
		if (v.size() == 0) cout << 1 << "\n";
		else cout << 0 << "\n";
	}
	void top() {
		if (v.size() == 0) cout << -1 << "\n";
		else cout << v.back() << "\n";
	}
};

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N, num;
	string str;
	stack s;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> num;
			s.push(num);
		}
		else if (str == "pop")
		{
			s.pop();
		}
		else if (str == "size")
		{
			s.size();
		}
		else if (str == "empty")
		{
			s.empty();
		}
		else if (str == "top")
		{
			s.top();
		}
	}


	return 0;
}