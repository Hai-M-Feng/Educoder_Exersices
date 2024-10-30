#include <iostream>
#include <cstdio>

using namespace std;

int su(int n) {
	if (n == 0 || n == 1)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main() {
	bool num[1020];
	for (int i = 0; i <= 1000; i++) {
		num[i] = true;
	}
	for (int i = 0; i < 1000; i++) {
		if (num[i] && su(i)) {
			cout << i << " ";
			for (int j = i; j <= 1000; j += i)
				num[j] = false;
		}
	}
	return 0;
}