#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int n, num;
    bool flag = true;
    int a[1010];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> num;

    sort(a, &a[n]);

    for (int i = 0; i < n; i++) {
        if (a[i] == num) {
            cout << "要找的元素在" << i + 1 << "位置";
            flag = false;
        }
    }

    if (flag)
        cout << -1;

    return 0;
}
