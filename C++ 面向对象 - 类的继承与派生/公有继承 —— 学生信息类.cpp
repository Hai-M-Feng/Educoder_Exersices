#include "people.h"     // People 类定义在这里面
#include <string>
#include <iostream>

using namespace std;

/**********  Begin **********/
//公有继承 People
class Student : public People
{
public:
    int id;
    void PrintSID();
};
/**********  End **********/

void Student::PrintSID()
{
    /********* Begin *********/
    //输出 SID
    cout << "学号：" << id << endl;
    /********* End *********/
}

void Set(int sid, string name, Student* ptr)
{
    /********* Begin *********/
    //给 ptr 对象的两个属性赋值
    ptr->Name = name;
    ptr->id = sid;
    /********* End *********/
}