#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a[1010];
    int row;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                row = a[j];
                a[j] = a[j + 1];
                a[j + 1] = row;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}