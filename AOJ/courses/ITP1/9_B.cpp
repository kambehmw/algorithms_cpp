#include <iostream>
using namespace std;

int main() {
    while (true) {
        string s;
        cin >> s;
        if (s == "-") break;

        int m;
        cin >> m;
        for (int i = 0; i < m; i++) {
            int h;
            cin >> h;
            s = s.substr(h, s.size() - h) + s.substr(0, h);
        }
        cout << s << endl;
    }
    return 0;
}