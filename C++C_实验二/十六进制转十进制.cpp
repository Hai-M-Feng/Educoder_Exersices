#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

long long ToDec(string s) {
	long long sum = 0;
	for (int i = 0; i < s.length(); i++)
		sum += ((s[s.length() - i - 1] >= '0' && s[s.length() - i - 1] <= '9') ? int(s[s.length() - i - 1] - '0') : int(s[s.length() - i - 1] - 'A') + 10) * pow(16, i);
	return sum;
}

int main() {
	string s;
	cin >> s;
	cout << ToDec(s);
	return 0;
}
