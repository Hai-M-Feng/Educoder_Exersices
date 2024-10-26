#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	double a, b, c, x1, x2, delta, xu;
    cin >> a >> b >> c;
    delta = b * b - 4 * a * c;
    if(delta == 0.0) {
        x1 = -b / 2 / a;
        printf("x1=x2=%.6lf", x1);
    }
    else if (delta > 0) {
        x1 = (-b + sqrt(delta)) / 2 / a;
        x2 = (-b - sqrt(delta)) / 2 / a;
        printf("x1=%.6lf\nx2=%.6lf", x1, x2);
    }
    else {
        x1 = -b / 2 / a;
        xu = sqrt(-delta) / 2 / a;
        printf("x1=%.6lf+%.6lfi\nx2=%.6lf-%.6lfi", x1, xu, x1, xu);
    }
    return 0;
}

