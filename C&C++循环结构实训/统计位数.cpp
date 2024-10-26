#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, co = 0;
    cin >> n;
    while (n) {
        co++;
        n /= 10;
    }
    cout << co;
    return 0;
}