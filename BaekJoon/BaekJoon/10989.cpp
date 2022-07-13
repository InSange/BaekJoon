#include <iostream>

int countnum[10001] = {};
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		countnum[num]++;
	}

	int i = 0;
	while(i < 10001) {
		while(countnum[i] > 0){
			cout << i << "\n";
			countnum[i]--;
		}
		i++;
	}

	return 0;
}



/*
int countnum[10001] = {};
int sumnum[10001] = {};
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	int* arr = new int[N];
	int* sortArr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		countnum[arr[i]]++;
	}

	sumnum[0] = countnum[0];

	for (int i = 1; i < 10001; i++) {
		sumnum[i] = sumnum[i-1] + countnum[i];
	}

	for (int i = 0; i < N; i++) {
		sortArr[sumnum[arr[i]]] = arr[i];
		sumnum[arr[i]]--;
	}

	for (int i = 1; i <= N; i++) {
		cout << sortArr[i] << "\n";
	}

	return 0;
}
*/