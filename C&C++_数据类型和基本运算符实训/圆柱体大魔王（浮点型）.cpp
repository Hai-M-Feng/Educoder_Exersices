// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14;

int main()
{
    double r, h;
    double V;
    double S;
    cin >> r >> h;

    S = 2 * PI * r * (r + h);
    V = PI * h * r * r;

    printf("%.2lf %.2lf\n", S, V);

    return 0;
}