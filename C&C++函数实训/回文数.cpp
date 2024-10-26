#include <iostream>  
#include <iomanip>  
#include <cmath>  
using namespace std;

bool HuiWen(int n) {
    int row = n;
    int m = 0;
    while (row) {
        m *= 10;
        m += row % 10;
        row /= 10;
    }
    return m == n ? true : false;
}

int main() {
    int t, n, co = 0;
    cin >> t >> n;
    if (t != 5) {
        if (HuiWen(n))
            cout << "Yes";
        else
            cout << "No";
        return 0;
    }
    else {
        for (int i = 0; i < 1000; i++) {
            if (HuiWen(i)) {
                cout << i;
                if (co == 9) {
                    cout << endl;
                    co = 0;
                }
                else{
                    cout << " ";
                    co++;
                }
            }
        }
    }
    return 0;
}