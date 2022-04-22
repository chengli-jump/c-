#include <iostream>
using namespace std;

#include <deque>

void myprint(deque<int>& d)
{
    for (auto v:d)
    {
        cout << v << " ";
    }
    cout << endl;
}

//deque构造 
void test01()
{
    deque<int> d1;//无参构造
    for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

    myprint(d1);

    deque<int> d2(d1); //拷贝构造
    myprint(d2);

    deque<int> d3(10,100);
    myprint(d3);

    deque<int> d4(d1.begin(), d1.end());
    myprint(d4);


}

int main()
{
    test01();
    system("pause");
}