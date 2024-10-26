#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int sum = 0;
    for(int i = 1; i <= 39; i += 2) {
        sum += i * (i + 1);
    }
    cout << sum;
    return 0;
}