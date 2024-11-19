#include <stdio.h>
#include <iostream>
using namespace std;

const double PI = 3.14;

class Shape {
public:
	virtual void GetArea() = 0;
	virtual void GetPerim() = 0;
};

class Rectangle : public Shape {
private:
	double length;
	double width;

public:
	Rectangle(double a, double b) : length(a), width(b) {}
	void GetArea() override {
		printf("%.2lf\n", length * width);
	}

	void GetPerim() override {
		printf("%.2lf\n", length + width + length + width);
	}
};

class Circle : public Shape {
private:
	double r;

public:
	Circle(double a) : r(a) {}
	void GetArea() override {
		printf("%.2lf\n", PI * r * r);
	}

	void GetPerim() override {
		printf("%.2lf\n", 2.0 * PI * r);
	}
};

class Square : public Shape {
private:
	double length;

public:
	Square(double a) : length(a) {}
	void GetArea() override {
		printf("%.2lf\n", length * length);
	}

	void GetPerim() override {
		printf("%.2lf\n", length * 4.0);
	}
};

int main() {
	double l1, l2, w, r;
	scanf("%lf%lf%lf%lf", &l1, &w, &r, &l2);
	Rectangle a(l1, w);
	Circle b(r);
	Square c(l2);
	Shape* p;
	p = &a;
	p->GetArea();
	p->GetPerim();
	p = &b;
	p->GetArea();
	p->GetPerim();
	p = &c;
	p->GetArea();
	p->GetPerim();
	return 0;
}