#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <sstream>

using namespace std;

int str_cmp(string s1, string s2) {
	if (s1.length() != s2.length())
		return -1;
	else {
		for (int i = 0; i < s1.length(); i++)
			if (s1[i] != s2[i])
				return -1;
		return 0;
	}
}

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	cout << str_cmp(s1, s2);
	return 0;
}