#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a[1010];
    int n;
    int max = -1e9;
    int min = 1e9;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    for (int i = 0; i < n; i++)
        if (a[i] == min){
            cout << i << " ";
            break;
        }
    for (int i = 0; i < n; i++)
        if (a[i] == max) {
            cout << i;
            return 0;
        }
    return 0;
}