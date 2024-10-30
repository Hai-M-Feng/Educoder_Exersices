#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a[101][101];
    int n;

    for (int i = 0; i < 101; i++)
        for (int j = 0; j < 101; j++)
            a[i][j] = 0;
    for (int i = 0; i < 101; i++)
        a[i][0] = 1;

    cin >> n;

    cout << 1 << endl;
    for (int i = 1; i < n; i++) {
        cout << a[i][0] << " ";
        for (int j = 1; j <= i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            cout << a[i][j];
            if (j == i)
                cout << endl;
            else
                cout << " ";
        }
    }
    return 0;
}