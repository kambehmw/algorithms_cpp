#include <iostream>
using namespace std;

int main() {
    string s;
    int counter[26] = {};
    while (getline(cin, s)) {
        int num;
        for (char ch : s) {
            if (('a' <= ch && ch <= 'z')) {
                num = ch - 'a';
                counter[num]++;
            } else if (('A' <= ch && ch <= 'Z')) {
                num = ch - 'A';
                counter[num]++;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << char(i + 'a') << " : " << counter[i] << endl;
    }

    return 0;
}