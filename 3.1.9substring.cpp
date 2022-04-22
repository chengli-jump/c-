#include <iostream>
using namespace std;


#include <string>

void test01()
{
    string str = "abcdefg";
    string substr = str.substr(1,3);
    cout << "subStr = " << substr << endl;

    string email = "hello@sina.com";
    int pos = email.find("@");
    string username =email.substr(0,pos);
    cout << "username: " << username << endl;
}

int main()
{
    test01();

    system("pause");
}