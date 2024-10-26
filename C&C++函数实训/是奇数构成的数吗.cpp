#include <iostream>  
#include <iomanip>  
#include <cmath>  
using namespace std;

bool jiShu(int n) {
    return n % 2 == 0 ? false : true;
}
int main() {
    int n;
    cin >> n;
    while (true) {
        if (jiShu(n % 10) == false) {
            cout << "No";
            return 0;
        }
        n /= 10;
        if (n == 0)
            break;
    }
    cout << "Yes";
    return 0;
}