#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        vector<int> tmp(n);
        std::copy(a.begin(), a.end(), tmp.begin());

        int b, m, e;
        cin >> b >> m >> e;
        for (int k = 0; k < e - b; k++) {
            int from = b + k;
            int to = b + ((k + (e - m)) % (e - b));
            a[to] = tmp[from];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}