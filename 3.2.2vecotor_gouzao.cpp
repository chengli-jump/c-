#include <iostream>
using namespace std;

#include <vector>


void printfvector(vector<int>& v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
}



void test01()
{
    vector<int> v;  //无参构造
    for (int i=0; i<10; i++)
    {
        v.push_back(i);
    }
    printfvector(v);

    vector<int> v1(v.begin(), v.end());

    printfvector(v1);

    vector<int> v2(10,100);
    printfvector(v2);

    vector<int> v3(v); //拷贝构造
    printfvector(v3);
}

int main()
{
    test01();
    system("pause");
    
}
