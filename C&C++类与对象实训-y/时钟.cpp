#include <iostream>
#include <cstdio>
#include <sstream>

using namespace std;

class Clock {
private:
	int hour;
	int minute;
	int second;

public:
	Clock(int a, int b, int c) {
		this->hour = a;
		this->minute = b;
		this->second = c;
	}

	int tosec() {
		int sec = 0;
		sec += this->second;
		sec += this->minute * 60;
		sec += this->hour * 60 * 60;;
		return sec;
	}

	int comp(Clock& i) {
		return this->tosec() - i.tosec();
	}

	string fill(int n) {
		stringstream ss;
		if (n < 10) {
			ss << 0 << n;
			return ss.str();
		}
		else {
			ss << n;
			return ss.str();
		}
	}

	string show() {
		stringstream ss;
		ss << fill(this->hour) << ":" << fill(this->minute) << ":" << fill(this->second);
		return ss.str();
	}
};

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	Clock c1(a, b, c);
	cin >> a >> b >> c;
	Clock c2(a, b, c);
	cout << c1.show() << endl << ((c1.comp(c2) > 0) ? c1.comp(c2) : -c1.comp(c2));
	return 0;
}
