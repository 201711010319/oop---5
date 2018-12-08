/*********************************************
Topic :基类构造函数调用
Author:Qiu xiaoli
Date  :2018 -12 -1 -17:48:37

**********************************************/
#include<iostream>
using namespace std;
class Base
{
private:
	int x;
public:
	Base(int i)
	{
		x = i;
		cout << "constructing Base\n";
	}
	void show()
	{
		cout << "x=" << x << endl;
	}
};
class Derived :public Base                   //派生类
{
private:
	Base d;                                  //Base类的对象成员
public:
	Derived(int i) :Base(i), d(i)             //基类构造函数和对象成员构造函数的调用
	{
		cout << "constructing Derived\n";
	}
};
int main()
{
	Derived obj(100);
	obj.show();
system("pause");
return 0;
}