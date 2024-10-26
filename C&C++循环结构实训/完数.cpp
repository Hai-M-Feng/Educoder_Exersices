#include <iostream>
#include <cstdio>

using namespace std;

bool wanshu(int n) {
    int count = 0;
    if (n == 1) {
        return false;
    }
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            count += i;
    }
    return n == count ? true : false;
}

int main() {
    for (int i = 1; i < 1000; i++) {
        if (wanshu(i))
            cout << i << " ";
    }
    return 0;
}