// 包含两种I/O库，可以使用任一种输入输出方式
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    char c_a;
    cin >> c_a;
    if (c_a >= 'a' && c_a <= 'z')
        cout << char(c_a - ('a' - 'A')) << endl;
    else if (c_a >= 'A' && c_a <= 'Z')
        cout << char(c_a + ('a' - 'A')) << endl;
    else return 0;
    return 0; 
}