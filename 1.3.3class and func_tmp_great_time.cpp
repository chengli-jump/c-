#include <iostream>
using namespace std;
#include <string>

class person1
{
public:
    void showperson1()
    {
        cout <<"person1 show" << endl;
    }
};
class person2
{
public:
    void showperson2()
    {
        cout << "person2 show" << endl;
    }
};

template<class T>
class myclass
{
public:
    T obj;
    //类模板中的成员函数，并不是一开始就创建的,而是在模板调用时,再生成

    void func1()
    {
        obj.showperson1();
    }
    void func2()
    {
        obj.showperson2();
    }
};

void test01()
{
    myclass<person1> m;
    m.func1();

    // m.func2();

}

int main()
{
    test01();

    system("pause");
}

