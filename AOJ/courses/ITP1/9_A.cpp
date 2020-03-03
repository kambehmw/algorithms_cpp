#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string W;
    cin >> W;
    transform(W.begin(), W.end(), W.begin(), ::tolower);
    string word;
    int cnt = 0;
    while (cin >> word) {
        if (word == "END_OF_TEXT") break;
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        if (word == W) cnt++;
    }

    cout << cnt << endl;
    return 0;
}