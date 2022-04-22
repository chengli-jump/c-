#include <iostream>
using namespace std;

#include <iostream>

void test01()
{
    string str = "hello";
    str.insert(1,"111");
    cout << str << endl;

    str.erase(1,3); //删除从pos=1开始的三个字符
    cout << str << endl;
}

int main()
{
    test01();
    
    system("pause");
}


