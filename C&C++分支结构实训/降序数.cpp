#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, c;
    cin >> n;
    c = n % 10;
    n /= 10;
    while (n) {
        if (n % 10 <= c) {
            cout << "No";
            return 0;
        }
        else {
            c = n % 10;
            n /= 10;
        }
    }
    cout << "Yes";
    return 0;
}