#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cout << "函数被调用" << endl;
    }
    for (int i = 0; i < n; i++) {
        cout << "这是第" << i + 1 << "次调用" << endl;
    }
    return 0;
}