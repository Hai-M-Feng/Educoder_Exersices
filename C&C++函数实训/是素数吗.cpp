#include <iostream>  
#include <iomanip>  
#include <cmath>  
using namespace std;

bool SuShu(int n) {
	if (n == 0 || n == 1)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main() {
	int i;
	cin >> i;
	cout << (SuShu(i) ? "Yes" : "No");
	return 0;
}