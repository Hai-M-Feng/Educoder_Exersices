// 包含两种I/O库，可以使用任一种输入输出方式
#include <cstdio>
#include <iostream>
using namespace std;

int SumNums(int num) {
    int sum = 0;
    while(num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int num;
    cin >> num;
    cout << SumNums(num) << endl;
    return 0;
}