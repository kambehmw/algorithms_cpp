#include <iostream>
using namespace std;

const int MAX_N = 50;

char s[MAX_N];

int main() {
    int N, K;
    cin >> N >> K;
    cin >> s;
    s[K-1] += 32;
    printf("%s\n", s);
}