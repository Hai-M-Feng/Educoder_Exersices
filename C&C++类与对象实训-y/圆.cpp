#include <iostream>
#include <cstdio>
#include <sstream>

using namespace std;

class Point {
private:
	int x;
	int y;

public:
	Point(int a, int b) : x(a), y(b) {}
	Point() : Point(0, 0) {}
	
	//用于输出
	const void show() {
		printf("(%d,%d)", x, y);
	}
};

class Circle {
private:
	Point center;
	double r;
	double area;

public:
	Circle(double rt, int a, int b) : r(rt), area(3.14 * rt * rt) {
		Point temp(a, b);
		this->center = temp;
	}

	//用于输出
	const void show() {
		printf("2\n%.2lf ", r);
		center.show();
		printf(" %.2lf\n1", area);
	}
};

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	Circle c1(a, b, c);
	c1.show();
	return 0;
}