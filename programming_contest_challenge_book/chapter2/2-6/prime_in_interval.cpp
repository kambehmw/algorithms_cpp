#include <iostream>
using namespace std;

const long long MAX_L = 1000000000000;
const long long MAX_SQRT_B = 1000000;

typedef long long ll;

bool is_prime[MAX_L];
bool is_prime_small[MAX_SQRT_B];

ll A, B;

void segment_sieve(ll a, ll b) {
    for (int i = 0; (ll)i * i < b; i++) is_prime_small[i] = true;
    for (int i = 0; i < b - a; i++) is_prime[i] = true;

    for (int i = 2; (ll) i * i < b; i++) {
        if (is_prime_small[i]) {
            for (int j = 2 * i; (ll)j * j < b; j += i) is_prime_small[j] = false;
            for (ll j = max(2LL, (a + i - 1) / i) * i; j < b; j+= i) is_prime[j - a] = false;
        }
    }
}

int main() {
    cin >> A >> B;

    segment_sieve(A, B);

    int count = 0;
    for (ll i = 0; i < MAX_L; i++) {
        if (is_prime[i]) count++;
    }

    cout << count << endl;
    return 0;
}