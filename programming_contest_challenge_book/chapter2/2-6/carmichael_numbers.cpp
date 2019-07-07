#include <iostream>
using namespace std;

typedef long long ll;

const int MAX_N = 65000;

int N;

bool is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return n != 1;
}

ll mod_pow(ll x, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * x % mod;
        x = x * x % mod;
        n >>= 1;
    }
    return res;
}

int main() {
    cin >> N;

    if (is_prime(N)) {
        cout << "No" << endl;
        exit(0);
    }

    for (int i = 2; i < N; i++) {
        if (mod_pow(i, N, N) != (i % N)) {
            cout << "No" << endl;
            exit(0);
        }
    }

    cout << "Yes" << endl;
    return 0;
}