#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string s;
	cin >> s;
	
	int count = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s.find("c=") != string::npos) {
			s.replace(s.find("c="), 2, "a");
		}
		else if (s.find("c-") != string::npos) {
			s.replace(s.find("c-"), 2, "a");
		}
		else if (s.find("dz=") != string::npos) {
			s.replace(s.find("dz="), 3, "a");
		}
		else if (s.find("d-") != string::npos) {
			s.replace(s.find("d-"), 2, "a");
		}
		else if (s.find("lj") != string::npos) {
			s.replace(s.find("lj"), 2, "a");
		}
		else if (s.find("nj") != string::npos) {
			s.replace(s.find("nj"), 2, "a");
		}
		else if (s.find("s=") != string::npos) {
			s.replace(s.find("s="), 2, "a");
		}
		else if (s.find("z=") != string::npos) {
			s.replace(s.find("z="), 2, "a");
		}

	}

	cout << s.size() << "\n";

	return 0;
}