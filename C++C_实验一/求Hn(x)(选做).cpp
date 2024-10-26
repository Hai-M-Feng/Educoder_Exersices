#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int mysort(int n, int x) {
    if (n == 0)
        return 1;
    else if (n == 1)
        return 2 * x;
    else  {
        return 2 * x * mysort(n - 1, x) - 2 * (n - 1) * mysort(n - 2, x);
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << mysort(a, b);
    return 0;
}