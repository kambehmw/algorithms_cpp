#include <iostream>
#include <list>
using namespace std;

int main() {
    int q;
    cin >> q;
    list<int> l;
    decltype(l)::iterator it = l.end();
    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;
        if (query == 0) {
            int x;
            cin >> x;
            it = l.insert(it, x);
        } else if (query == 1) {
            int d;
            cin >> d;
            if (d > 0) {
                for (int j = 0; j < d; j++) {
                    it++;
                }
            } else {
                for (int j = 0; j < -d; j++) {
                    it--;
                }
            }
        } else if (query == 2) {
            it = l.erase(it);
        }
    }
    for (int i : l) {
        cout << i << endl;
    }
    return 0;
}