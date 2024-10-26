#include <iostream>  
#include <iomanip>  
#include <cmath>  
using namespace std;

int CountNum(int n) {
	if (n == 0)
		return 1;

	int co = 0;
	while (n) {
		co++;
		n /= 10;
	}
	return co;
}

int Exchange(int num) {
	int after = 0;

	after += num / 10;
	after += (num % 10) * pow(10, CountNum(num) - 1);

	return after;
}

int main() {
	int i = 0;
	
	while (true)
	{
		if (i % 10 == 8 && (i * 4) == Exchange(i)) {
			cout << i;
			return 0;
		}
		i++;
	}
	return 0;
}