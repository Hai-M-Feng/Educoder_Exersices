#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    if (c == 1)
        n += 10;
    else if (c == 2 || c == 3)
        n += 5;

    if (n > 100)
        cout << "100";
    else
        cout << n;

    return 0;
}