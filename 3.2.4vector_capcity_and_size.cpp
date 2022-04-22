#include <iostream>
using namespace std;

#include <string>
#include <vector>

void myprint(vector<int> &v)
{
    for (auto it:v)
    {
        cout << it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int> v1;
    for (int i=0; i<10; i++)
    {
        v1.push_back(i);
    }
    myprint(v1);

    if (v1.empty())
    {
        cout << "v1为空" << endl;
    }
    else
    {
        cout << "v1不为空" << endl;
        cout << "v1的容量=" << v1.capacity() << endl;
        cout << "v1的大小=" << v1.size() << endl;
    }

    //vecotr resize()重新指定大小，若指定更大，默认用0填充，可以自己设置默认填充元素
    v1.resize(15,10);
    myprint(v1);

    //resize重新指定大小，若指定的更小,超出部分元素被删除
    v1.resize(5);

    myprint(v1);
}

int main()
{
    test01();

    system("pause");
}

