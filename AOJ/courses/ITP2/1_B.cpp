#include <iostream>
#include <deque>
using namespace std;

int main() {
    int q;
    cin >> q;
    deque<int> deq;
    for (int i = 0; i < q; i++) {
        int que;
        cin >> que;
        if (que == 0) {
            int d, x;
            cin >> d >> x;
            if (d == 0) {
                deq.push_front(x);
            } else if (d == 1) {
                deq.push_back(x);
            }
        } else if (que == 1) {
            int p;
            cin >> p;
            cout << deq[p] << endl;
        } else if (que == 2) {
            int d;
            cin >> d;
            if (d == 0) {
                deq.pop_front();
            } else if (d == 1) {
                deq.pop_back();
            }
        }
    }
    return 0;
}