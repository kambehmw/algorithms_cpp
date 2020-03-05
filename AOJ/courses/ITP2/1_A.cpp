#include <iostream>
#include <vector>
using namespace std;

int main() {
    int q;
    cin >> q;

    vector<int> a;
    for (int i = 0; i < q; i++) {
        int c;
        cin >> c;
        if (c == 0) {
            int x;
            cin >> x;
            a.push_back(x);
        } else if (c == 1) {
            int p;
            cin >> p;
            cout << a[p] << endl;
        } else if (c == 2) {
            a.pop_back();
        }
    }
    return 0;
}