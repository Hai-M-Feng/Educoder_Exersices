#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    bool kai = false;
    cin >> n;
    
    while (n) {
        if (kai != true) {
            if (n % 10 != 0) {
                kai = true;
            }
            else {
                n /= 10;
            }
        }
        if (kai == true) {
            cout << n % 10;
            n /= 10;
        }
    }
    return 0;
}