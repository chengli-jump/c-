#include <iostream>
using namespace std;
#include <string>
// 类模板与函数模板区别主要有两点：

// 1. 类模板没有自动类型推导的使用方式
// 2. 类模板在模板参数列表中可以有默认参数
template<class nametype, class agetype = int>
class person
{
public:
    person(nametype name, agetype age)
    {
        this->mname = name;
        this->mage = age;
    }
    void showperson()
    {
        cout << "name: " << this->mname << "age: " << this->mage << endl;
    }

    nametype mname;
    agetype mage;
};
//1.类模板没有自动推导的使用方式 
void test01()
{
    // Person p("孙悟空", 1000); // 错误 类模板使用时候，不可以用自动类型推导
    person<string,int>p ("安斋拉拉", 23);
    p.showperson();
}

//2.类模板在模板参数列表可以有默认参数
void test02()
{
    person<string> p("樱空桃", 21);
    p.showperson();
}

int main()
{
    test01();

    test02();

    system("pause");
}