#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int m;
    cin >> m;
    vector<int> b(m);
    int res = -1;
    for (int i = 0; i < m; i++) cin >> b[i];
    for (int i = 0; i < min(n, m); i++) {
        if (a[i] == b[i]) continue;

        if (a[i] > b[i]) res = 0;
        if (a[i] < b[i]) res = 1;

        break;
    }

    if (res == -1) res = m > n;
    cout << res << endl;
    return 0;
}