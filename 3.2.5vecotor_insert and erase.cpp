#include <iostream>
using namespace std;

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
    //尾插
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    
    //尾删
    v1.pop_back();
    myprint(v1);

    //插入
    v1.insert(v1.begin(),100);
    myprint(v1);

    v1.insert(v1.begin(),2,1000);
    myprint(v1);

    //删除
    v1.erase(v1.begin());
    myprint(v1);

    //清空
    v1.erase(v1.begin(),v1.end());
    myprint(v1);
    v1.clear();
    myprint(v1);
}

int main()
{
    test01();

    system("pause");
}
