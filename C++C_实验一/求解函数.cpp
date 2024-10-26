#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double absl(double s) {
    if (s < 0)
        return -s;
    else 
        return s;
}

int main() {
	double x, y, z;
    cin >> x >> y;

    if (x < 0 && y < 0) {
        z = exp(x + y);
    }
    else if (x + y >= 1 && x + y < 10) {
        z = log(x + y);
    }
    else {
        z = log10(absl(x + y) + 1);
    }
    printf("%.6lf\n", z);
    return 0;
}