#include <iostream>
using namespace std;
#include <string>

template<class nametype, class agetype>
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


void test01()
{
    //参数不一致，显示指定类型(而且类模板没有自动推导)
    person<string,int>p1("安斋拉拉",23);

    p1.showperson();

}

int main()
{
    test01();

    system("pause");
}
