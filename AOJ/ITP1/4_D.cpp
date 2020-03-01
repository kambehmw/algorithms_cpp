#include <iostream>
#include <algorithm>
using namespace std;
#define SIZE(buff) (sizeof(buff)/sizeof(buff[0]))

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];

    long long total = 0;
    for (int i = 0; i < N; i++) {
        total += A[i];
    }

    cout << *min_element(A, A + SIZE(A)) << " "
    << *max_element(A, A + SIZE(A)) << " " << total << endl;
    return 0;
}