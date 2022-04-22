#include <iostream>
using namespace std;

#include <vector>

void ptintfvector(vector<int>& v)
{
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//赋值操作
void test01()
{
    vector<int> v1; //无参构造
    for (int i=0; i<10; i++)
    {
        v1.push_back(i);
    }

    ptintfvector(v1);

    vector<int> v2;
    v2 =  v1;
    ptintfvector(v2);

    vector<int> v3;
    v3.assign(v1.begin(),v1.end());
    ptintfvector(v3);

    vector<int> v4;
    v4.assign(10, 100);
    ptintfvector(v4);
}

int main()
{
    test01();

    system("pause");
}