#include <iostream>
using namespace std;

int main() {
    while (true) {
         string number;
        cin >> number;
        if (number == "0") {
            break;
        }

        int sum = 0;
        for (char c : number) {
            sum += c - '0';
        }
        cout << sum << endl;
    }
    return 0;
}