#include <iostream>
#include <cstdio>

using namespace std;

//复数类
class Plural {
private:
	double realPart;
	double imaginaryPart;

public:
	//构造函数
	Plural(double a, double b) {
		this->realPart = a;
		this->imaginaryPart = b;
	}

	//用于将两个复数相加
	void add(Plural& i) {
		this->realPart += i.realPart;
		this->imaginaryPart += i.imaginaryPart;
	}

	//用于输出这个复数
	void show() {
		if (this->realPart == 0) {
			if (this->imaginaryPart == 0) {
				printf("0");
				return;
			}
			else {
				if (this->imaginaryPart == 1) {
					printf("i");
					return;
				}
				else if (this->imaginaryPart == -1) {
					printf("-i");
					return;
				}
				else {
					printf("%.1lfi", this->imaginaryPart);
					return;
				}
			}
		}
		else {
			if (this->imaginaryPart == 0) {
				printf("%.1lf", this->realPart);
				return;
			}
			else if (this->imaginaryPart < 0) {
				if (this->imaginaryPart == -1) {
					printf("%.1lf-i", this->realPart);
					return;
				}
				else {
					printf("%.1lf%.1lfi", this->realPart, this->imaginaryPart);
					return;
				}
			}
			else if (this->imaginaryPart > 0) {
				if (this->imaginaryPart == 1) {
					printf("%.1lf+i", this->realPart);
					return;
				}
				else {
					printf("%.1lf+%.1lfi", this->realPart, this->imaginaryPart);
					return;
				}
			}
		}
	}
};

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	Plural p1(a, b);
	Plural p2(c, 0);
	p1.add(p2);
	p1.show();
	return 0;
}

