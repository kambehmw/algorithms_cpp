#include <iostream>
using namespace std;

typedef long long ll;

const int MAX_N = 800;
const int MAX_V = 100000;

int N;
int v1[MAX_V], v2[MAX_V];

void solve() {
    sort(v1, v1 + N);
    sort(v2, v2 + N);
    ll ans = 0;
    for (int i = 0; i < N; i++) ans += (ll)v1[i] * v2[N - i - 1];
    printf("%lld\n", ans);
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> v1[i];
    for (int i = 0; i < N; i++) cin >> v2[i];

    solve();
    return 0;
}