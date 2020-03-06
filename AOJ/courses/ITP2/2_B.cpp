#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    queue<int> que[n];
    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;
        if (query == 0) {
            int t, x;
            cin >> t >> x;
            que[t].push(x);
        } else if (query == 1) {
            int t;
            cin >> t;
            if (!que[t].empty()) {
                cout << que[t].front() << endl;
            }
        } else if (query == 2) {
            int t;
            cin >> t;
            if (!que[t].empty()) {
                que[t].pop();
            }
        }
    }
    return 0;
}