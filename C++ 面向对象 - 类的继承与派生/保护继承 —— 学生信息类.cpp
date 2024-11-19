#include "people.h"     // People 类定义在这里面
#include <string>
#include <iostream>
using namespace std;

/**********  Begin **********/
//保护继承 People
class Student : protected People
{
public:
    int SID;
    void PrintSID();
    //添加一个 Set 函数来设置父类的 Name 成员
    void setName(string name_t) {
        Name = name_t;
    }
};
/********* End *********/

void Student::PrintSID()
{
    /********* Begin *********/
    //输出学号 SID
    cout << "学号：" << SID << endl;
    /********* End *********/
}

void Set(int sid, string name, Student* ptr)
{
    /********* Begin *********/
    //给 ptr 对象的两个属性赋值
    ptr->SID = sid;
    ptr->setName(name);
    /********* End *********/
}