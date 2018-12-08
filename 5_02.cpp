/*********************************************
Topic :
Author:Qiu xiaoli
Date  :2018 -11 -18 -16:45:08

**********************************************/
#include<iostream>
using namespace std;
class A
{
public:
	A(int a)
	{
		x = a;
		cout << "A:x=" << a << endl;
	}
private:
	int x;
};
class B
{
public:
	B(int a, int b, int c) :a2(b), a1(a)         //注意：初始化列表中是成员对象名a1,a2,而不是类名A
	{
		y = c;
		cout << "B:y=" << c << endl;
	}
private:
	A a1, a2;
	int y;
};
int main()
{
	B obj(10, 20, 30);
system("pause");
return 0;
}