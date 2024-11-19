#include "people.h" //People类定义在这里面
#include <string>
#include <iostream>
using namespace std;

/********* Begin *********/
//私有继承 People 类
class Student : private People
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

/********* Begin *********/
// 公有继承 Student 类
class Graduate : public Student
{
public:
    int ResearchID;
    void PrintResearchID();
    //添加一个 Set 函数来设置父类的 SID 成员
    void setSID(int sid_t) {
        SID = sid_t;
    }
    //添加一个 Set 函数来调用父类的 SetName 函数
    void setName1(string name_t) {
        setName(name_t);
    }
};
/********* End *********/

void Graduate::PrintResearchID()
{
    /********* Begin *********/
    //输出研究方向 ResearchID
    cout << "研究方向：" << ResearchID << endl;
    /********* End *********/
}

void Set(string name, int sid, int rid, Graduate* ptr)
{
    /********* Begin *********/
    //设置 ptr 所指对象的三个成员
    ptr->setSID(sid);
    ptr->setName1(name);
    ptr->ResearchID = rid;
    /********* End *********/
}