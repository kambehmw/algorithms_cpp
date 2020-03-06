#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    stack<int> s[n];
    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;
        if (query == 0) {
            int t, x;
            cin >> t >> x;
            s[t].push(x);
        } else if (query == 1) {
            int t;
            cin >> t;
            if (!s[t].empty()) {
                cout << s[t].top() << endl;
            }
        } else if (query == 2) {
            int t;
            cin >> t;
            if (!s[t].empty()) {
                s[t].pop();
            }
        }
    }
    return 0;
}