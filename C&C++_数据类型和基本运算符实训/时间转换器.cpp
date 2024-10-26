// 包含两种I/O库，可以使用任一种输入输出方式
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int hour, minute, second;
    cin >> second;

    minute = second / 60;
    second %= 60;
    hour = minute / 60;
    minute %= 60;

    printf("%dh %dmin %ds\n", hour, minute, second);

    return 0;
}