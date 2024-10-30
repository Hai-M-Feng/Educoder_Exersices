#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <sstream>
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
	int co = 0;
	stringstream myStream;
	for (int i = 0; i <= 2000; i++) {
		if (SuShu(i) == false) {
			myStream << i << " ";
			co++;
		}
		if(SuShu(i) == true || i == 2000) {
			if (co > 10) {
				cout << myStream.str() << endl;
				myStream.clear();
				myStream.str("");
				co = 0;
			}
			else {
				myStream.clear();
				myStream.str("");
				co = 0;
			}
		}
	}
	return 0;
}
