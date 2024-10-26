#include <iostream>
#include <cstdio>

using namespace std;

int jiecheng(int n) {
    int sum = 1;
    while (n) {
        sum *= n;
        n--;
    }
    return sum;
}

int main() {
    int sum = 0;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += jiecheng(i);
    }

    cout << sum;

    return 0;
}
