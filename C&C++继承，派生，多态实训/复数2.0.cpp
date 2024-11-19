#include<cstdio>
#include<iostream>
using namespace std;
class Complex {
public:
	//构造方法
	Complex(double a, double b) : real(a), imag(b) {}
	Complex() : Complex(0.0, 0.0) {};

	//重构单目运算符
	//前置自增
	Complex& operator++() {
		real += 1.0;
		imag += 1.0;
		return *this;
	}
	//后置自增
	Complex operator++(int) {
		Complex temp = *this;
		++(*this);
		return temp;
	}

	//重构双目运算符
	//赋值运算
	Complex operator=(const Complex& c) {
		this->real = c.real;
		this->imag = c.imag;
		return *this;
	}
	//加法
	Complex operator+(const Complex& c) {
		Complex temp(this->real + c.real, this->imag + c.imag);
		return temp;
	}
	//减法
	Complex operator-(const Complex& c) {
		Complex temp(this->real - c.real, this->imag - c.imag);
		return temp;
	}
	//乘法
	Complex operator*(const Complex& c) {
		Complex temp(this->real * c.real - this->imag * c.imag, this->real * c.imag + this->imag * c.real);
		return temp;
	}
	//除法
	Complex operator/(const Complex& c) {
		double real_t = (this->real * c.real + this->imag * c.imag) / (c.imag * c.imag + c.real * c.real);
		double imag_t = (this->imag * c.real - this->real * c.imag) / (c.imag * c.imag + c.real * c.real);
		Complex temp(real_t, imag_t);
		return temp;
	}

	//输出方法
	void display() const {
		printf("(%.2lf,%.2lf)\n", real, imag);
	}
	

private:
	double real;
	double imag;
};

int main() {
	double r1, r2, i1, i2;
	scanf("%lf%lf%lf%lf", &r1, &i1, &r2, &i2);
	Complex a(r1, i1);
	Complex b(r2, i2);
	Complex c;
	c = a++;
	c.display();
	c = ++b;
	c.display();
	c = a + b;
	c.display();
	c = a - b;
	c.display();
	c = c * c;
	c.display();
	c = (a - b) / (a + b);
	c.display();
	return 0;
}