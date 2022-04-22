#include <iostream>
using namespace std;

#include <vector>
void myprint(vector<int> &v)
{
    for(auto it:v)
    {
        cout << it << " ";
    }
    cout << endl;
}
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	myprint(v1);

	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	myprint(v2);

    //互换之前地址;
    cout << "&v1 = " << &v1 << endl;
    cout << "&v2 = " << &v2 << endl;

    //互换之后
    cout << "互换之后" << endl;
    v1.swap(v2);
    myprint(v1);
    myprint(v2);
    cout << "&v1 = " << &v1 << endl;
    cout << "&v2 = " << &v2 << endl;
}

int main()
{
    test01();

    system("pause");
}
