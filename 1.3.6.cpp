#include <iostream>
using namespace std;
#include <string>

//类模板中成员函数类外实现
template<class T1, class T2>
class person
{
public:
    //成员函数类内声明
    person(T1 name, T2 age);
    void showperson();
public:
    T1 m_name;
    T2 m_age;
};

//构造函数 类外实现
template<class T1, class T2>
person<T1,T2>::person(T1 name, T2 age)
{
    this->m_age = age;
    this->m_name = name;
}

//成员函数 类外实现
template<class T1, class T2>
void person<T1, T2>::showperson()
{
    cout << "姓名: " << this->m_name << " 年龄:" << this->m_age << endl;
}

void test01()
{
    person<string,int> p("Tom",20);
    p.showperson();
}

int main()
{
    test01();

    system("pause");
}