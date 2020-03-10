#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int com, b, e;
        cin >> com >> b >> e;
        if (com == 0) {
            cout << *std::min_element(a.begin() + b, a.begin() + e) << endl;
        } else if (com == 1) {
            cout << *std::max_element(a.begin() + b, a.begin() + e) << endl;
        } else {

        }
    }
    return 0;
}