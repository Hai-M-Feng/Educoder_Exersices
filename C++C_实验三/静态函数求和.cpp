#include <iostream>
#include <cstring>

using namespace std;

void f1(int n) {
    int s = 0;
    s += n;
    cout << s << endl;
}

void f2(int n) {
    static int s = 0;
    s += n;
    cout << s << endl;
}

int main() {
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        f1(i);
    }
    for (int i = 0; i < m; i++) {
        f2(i);
    }
    return 0;
}