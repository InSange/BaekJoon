#include <iostream>

using namespace std;
string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
string BB[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};
string board[50];

int WB_Check(int n, int m) 
{
    int count = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i + n][j + m] != WB[i][j]) count++;
        }
    }

    return count;
}

int BB_Check(int n, int m)
{
    int count = 0 ;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i + n][j + m] != BB[i][j]) count++;
        }
    }

    return count;
}


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, M, min = 64;

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> board[i];
    }

    for (int i = 0; i < N - 7; i++) {
        for (int j = 0; j < M - 7; j++) {
            int WBmin = WB_Check(i, j);
            int BBmin = BB_Check(i, j);
            if (WBmin < min) min = WBmin;
            if (BBmin < min) min = BBmin;
        }
    }
    if (min == 64) cout << 0;
    else cout << min;

    return 0;
}