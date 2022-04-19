#include <iostream>
using namespace std;
#include <string>

//类模板
template<class nametype,class agetype=int>
class person
{
public:
    person(nametype name,agetype age)
    {
        this->mname = name;
        this->mage = age;
    }

    void showperson()
    {
        cout << "name: " << this->mname << "age: " << this->mage << endl;
     }


public:
    nametype mname;
    agetype mage;
};

//1.指定传入类型
void printperson1(person<string , int> &p)
{
    p.showperson();
}

void test01()
{
    person<string , int>p("安宅拉拉" ,23);
    printperson1(p);
}

//2.参数模板化
template<class T1,class T2>
void printperson2(person<T1,T2> &p)
{
    p.showperson();

    cout << "T1的类型为: " << typeid(T1).name() << endl;
    cout << "T2的类型为: " << typeid(T2).name() << endl;
}
void test02()
{
    person<string,int> p("冲田杏梨", 25);
    printperson2(p);
}

//3.整个类模板化
template<class T>
void printperson3(T &p)
{
    cout << "T的类型为: " << typeid(T).name() << endl;
    p.showperson();
}

void test03()
{
    person<string,int> p("樱空桃",21);
    printperson3(p);
}

int main()
{
    test02();

    system("pause");
}