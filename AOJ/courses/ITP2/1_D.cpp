#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> v[n];
    for (int i = 0 ; i < q; i++) {
        int query;
        cin >> query;
        if (query == 0) {
            int t, x;
            cin >> t >> x;
            v[t].push_back(x);
        } else if (query == 1) {
            int t;
            cin >> t;
            for (int j = 0; j < v[t].size(); j++) {
                if (j < v[t].size() - 1) {
                    cout << v[t][j] << " ";
                } else {
                    cout << v[t][j];
                }
            }
            cout << endl;
        } else if (query == 2) {
            int t;
            cin >> t;
            v[t].clear();
        }
    }
    return 0;
}