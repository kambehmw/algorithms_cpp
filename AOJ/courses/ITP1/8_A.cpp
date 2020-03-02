#include <iostream>
using namespace std;

int main() {
    char ch;
    while (true) {
        scanf("%c", &ch);
        if ('a' <= ch && ch <= 'z') {
            printf("%c", ch - 'a' + 'A');
        } else if ('A' <= ch && ch <= 'Z') {
            printf("%c", ch - 'A' + 'a');
        } else {
            printf("%c", ch);
        }

        if (ch == '\n') {
            break;
        }
    }
    return 0;
}