#include <iostream>
using namespace std;

#include <string>

void test01()
{
    string str1 = "我";

    str1 += "爱玩游戏";

    cout << "str1 = " << str1 << endl;

}

int main()
{
    test01();
    system("pause");
}