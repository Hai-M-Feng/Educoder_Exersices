// 包含两种I/O库，可以使用任一种输入输出方式
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int num[4];
    cin >> num[1] >> num[2] >> num[3];
    num[0] = num[1];
    num[1] = num[2];
    num[2] = num[3];
    num[3] = num[0];
    cout << num[1] << " " << num[2] << " " << num[3] << endl;
    return 0;
}