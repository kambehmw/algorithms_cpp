#include <iostream>
#include <algorithm>
using namespace std;

const int N = 6;
const int V[N] = {1, 5, 10, 50, 100, 500};

int C[N];
int A;

void solve() {
    int ans = 0;
    for (int i = 5; i >= 0; i--) {
        int t = min(A / V[i], C[i]);
        A -= t * V[i];
        ans += t;
    }

    printf("%d\n", ans);
}

int main() {
    // 3 2 1 3 0 2 620
    for (int i = 0; i < N; i++) cin >> C[i];
    cin >> A;

    solve();

    return 0;
}