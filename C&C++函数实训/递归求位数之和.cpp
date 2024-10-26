#include <iostream>  
#include <iomanip>  
#include <cmath>  
using namespace std;

int dfs(int n) {
	if (n < 10)
		return n;
	else
		return dfs(n / 10) + n % 10;
}

int main() {
	int n;
	cin >> n;
	cout << dfs(n);
	return 0;
}