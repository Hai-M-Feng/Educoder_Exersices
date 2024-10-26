#include <iostream>
#include <cstdio>

using namespace std;

int cifang(int a, int b) {
    int sum = 1;
    while (b--) {
        sum *= a;
    }
    return sum;
}

int main() {
    int n, a, sum = 0;
    cin >> a >> n;
    
    for (int i = 0; i < n; i++) {
        sum += cifang(10, i) * a * (n - i);
    }
    cout << sum;
    
    return 0;
}