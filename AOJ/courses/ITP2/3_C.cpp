#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int b, e, k;
        cin >> b >> e >> k;
        int cnt = std::count(a.begin() + b, a.begin() + e, k);
        cout << cnt << endl;
    }
    return 0;
}