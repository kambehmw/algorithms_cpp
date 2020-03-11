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
        int b, e;
        cin >> b >> e;
        std::reverse(a.begin() + b, a.begin() + e);
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