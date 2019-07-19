#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

const long long INF = 1LL << 60;

int N, K;
long long h[100010];

long long dp[100100];

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> h[i];
    for (int i = 0; i < N; i++) dp[i] = INF;

    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= K; j++) {
            chmin(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
        }
    }

    cout << dp[N - 1] << endl;

    return 0;
}