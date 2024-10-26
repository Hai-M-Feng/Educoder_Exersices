#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int linecount = 0;
    for (int i = 100; i <= 1000; i++) {
        if (i % 3 == 0 || i % 10 == 3) {
            cout << i;

            if (linecount != 9) {
                cout << " ";
                linecount++;
            }
            else {
                cout << endl;
                linecount = 0;
            }
        }
    }
    return 0;
}