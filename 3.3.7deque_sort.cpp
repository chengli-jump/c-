#include <iostream>
using namespace std;

#include <deque>
#include <algorithm>

void myprint(deque<int> a)
{
    for (auto v:a)
    {
        cout << v << " ";
    }
    cout << endl;
}


void test01()
{
    deque<int> d;
    d.push_back(20);
	d.push_back(10);
	d.push_front(100);
	d.push_front(200);

    myprint(d);

    sort(d.begin(),d.end());
    myprint(d);
}

int main()
{
    test01();
    system("pause");
}