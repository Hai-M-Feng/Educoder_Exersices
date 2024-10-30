#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <sstream>

using namespace std;

int a[1010];

int main() {
	int n;
	int max = -1e9;
	int min = 1e9;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}

	while (true) {
		bool flag = true;
		for (int i = 0; i < n; i++) {
			if (a[i] % max != 0) {
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << "最大公因子=" << max << endl;
			break;
		}
		max--;
	}

	while (true) {
		bool flag = true;
		for (int i = 0; i < n; i++) {
			if (min % a[i] != 0) {
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << "最小公倍数=" << min;
			break;
		}
		min++;
	}

	return 0;
}
