#include <iostream>
using namespace std;

#include <vector>
#include <string>

//自定义数据类型
class person
{
public:
    person(string name, int age)
    {
        mname = name;
        mage = age;
    }
    string mname;
    int mage;
};

//存放对象
void test01()
{
    vector<person> v;
    //创建数据
	person p1("aaa", 10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);
	person p5("eee", 50);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    for (auto it:v)
    {
        cout << "name:" << it.mname << "age" << it.mage << endl;
    }
}


void test02()
{
    vector<person*> v;

    //创建数据
	person p1("aaa", 10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);
	person p5("eee", 50);

    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    for (auto it:v)
    {
        cout << "name :" << it->mage << "age: " << it->mage << endl;
    }
}


int main()
{
    test02();

    system("pause");
}