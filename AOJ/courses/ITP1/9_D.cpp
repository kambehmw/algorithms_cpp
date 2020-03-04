#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        string command;
        cin >> command;
        int a, b;
        if (command == "replace") {
            string p;
            cin >> a >> b >> p;
            str = str.replace(a, b - a + 1, p);
        } else if (command == "reverse") {
            cin >> a >> b;
            reverse(str.begin()  + a, str.begin() + b + 1);
        } else if (command == "print") {
            cin >> a >> b;
            cout << str.substr(a, b - a + 1) << endl;
        }
    }
    return 0;
}