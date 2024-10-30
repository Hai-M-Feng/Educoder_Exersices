#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	int n;
	int co = 1;
	cin >> n;

	if (n == 1) {
		for (int i = 1; i <= 10; i++) {
			cout << i * i << " ";
		}
		return 0;
	}
	else if (n == 2) {
		for (int i = 1; i <= 55; i += co) {
			cout << i << " ";
			co++;
		}
		return 0;
	}
	else {
		int a = 1, b = 1, c = 1;
		while (b <= 89) {
			cout << b << " ";
			c = a + b;
			a = b;
			b = c;
		}
		return 0;
	}

	return 0;
}