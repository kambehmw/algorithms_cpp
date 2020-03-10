#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << std::min({a, b, c}) << " " << std::max({a, b, c}) << endl;
    return 0;
}