#include <iostream>
using namespace std;
#include <string>

void test01()
{
    string s1 = "hello";
    string s2 = "hello";

    if(s1 == s2)
    {
        cout << "字符串相等" << endl;
    }
    int ret = s1.compare(s2);
    if (ret==0)
    {
        cout << "字符串相等" << endl;
    }
}

int main()
{
    test01();

    system("pause");
}