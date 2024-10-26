#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double sum = 0, x;
    int xiang = 1;
    while (true) {
        x = 1.0 / xiang;
        if (x < 0.00000001) {
            sum *= 4;
            printf("%.6lf", sum);
            return 0;
        }
        sum += (xiang % 4 == 1 ? 1 : -1) * x;
        xiang += 2;
    }
    return 0;
}