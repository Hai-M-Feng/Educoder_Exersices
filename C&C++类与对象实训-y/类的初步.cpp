#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

//测试类
class Test {
private:
    int number;

public:
    //setter & getter
    void setNumber(int n) {
        this->number = n;
    }
    int getNumber() {
        return this->number;
    }

    //成员方法声明部分
    void wanShu();
    void zhiShu();
    void huiWen();
    void weiShu();

    //构造函数部分
    Test() {
        this->number = 0;
        cout << "无参构造函数被调用" << endl;
    };
    Test(int n) {
        this->number = n;
        cout << "有参构造函数被调用" << endl;
    }
    Test(Test& l) : number(l.number) {
        cout << "拷贝构造函数被调用" << endl;
    }
    ~Test() {
        cout << "析构函数被调用" << endl;
    }

};

//用于判断完数
void Test::wanShu() {
    int sum = 0;
    for (int i = 1; i < this->number; i++) {
        if (this->number % i == 0) {
            sum += i;
        }
    }
    if (sum == this->number) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return;
}

//用于判断质数
void Test::zhiShu() {
    if (this->number == 0) {
        cout << "No" << endl;
        return;
    }
    for (int i = 2; i * i <= this->number; i++) {
        if (number / i == 0) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    return;
}

//用于判断回文数
void Test::huiWen() {
    int sum = 0;
    int temp = this->number;
    while (temp) {
        sum *= 10;
        sum += temp % 10;
        temp /= 10;
    }
    if (sum == this->number) {
        cout << "Yes" << endl;
        return;
    }
    else {
        cout << "No" << endl;
        return;
    }
}

//用于统计位数
void Test::weiShu() {
    if (this->number == 0) {
        cout << "1" << endl;
        return;
    }
    int temp = this->number;
    int counter = 0;
    while (temp) {
        counter++;
        temp /= 10;
    }
    cout << counter << endl;
    return;
}

int main()
{
    int n;
    int temp = 0;
    cin >> n;
    switch (n) {
    case 1: {
        Test test1;
        Test test2(6);
        Test test3(test2);
        break;
    }

    case 2: {
        cin >> temp;
        Test test1;
        test1.setNumber(temp);
        test1.wanShu();
        break;
    }

    case 3: {
        cin >> temp;
        Test test1;
        test1.setNumber(temp);
        test1.zhiShu();
        break;
    }

    case 4: {
        cin >> temp;
        Test test1;
        test1.setNumber(temp);
        test1.huiWen();
        break;
    }

    case 5: {
        cin >> temp;
        Test test1;
        test1.setNumber(temp);
        test1.weiShu();
        break;
    }

    }
    return 0;
}
