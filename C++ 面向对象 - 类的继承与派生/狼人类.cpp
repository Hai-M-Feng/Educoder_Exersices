#include <string>
#include <iostream>

using namespace std;

/********* Begin *********/
class Wolf
{
    //狼类成员的声明
public:
    string Name;
    int Shape;
    void PrintState() {
        cout << "姓名：" << Name << "，爪子锋利度为：" << Shape << endl;
    }
};
//狼类成员的定义

class Human
{
    //人类成员的声明
public:
    string Name;
    int Intell;
    void PrintState() {
        cout << "姓名：" << Name << "，智力为：" << Intell << endl;
    }
};
//人类成员的定义

// 记得在这里写上要继承的类
class Werewolf : public Wolf, public Human
{
    //狼人类成员的声明
public:
    void SetName(string name) {
        Wolf::Name = name;
        Human::Name = name;
    }
    void SetState(int shape, int intell) {
        Shape = shape;
        Intell = intell;
    }
    void PrintAllState() {
        Wolf::PrintState();
        Human::PrintState();
    }
};
//狼人类成员的定义
/********* End *********/