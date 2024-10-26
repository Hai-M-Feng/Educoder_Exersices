#include <iostream>

using namespace std;

int main() {
	int n;
    cin >> n;
    int b[4] = {0, 0, 0, 0};

    b[0] = n % 10;
    n /= 10;
    b[1] = n % 10;
    n /= 10;
    b[2] = n % 10;
    n /= 10;
    b[3] = n % 10;

    cout << b[0] << b[1] << b[2] << b[3] << endl;
    return 0;
}