/*********************************************
Topic :单继承
Author:Qiu xiaoli
Date  :2018 -12 -1 -14:22:43

**********************************************/
#include<iostream>
using namespace std;
class Base                        //基类
{
private:
	int b1;                        //私有成员无法被继承
protected:
	int b2;
public:
	void set(int m, int n)
	{
		b1 = m;
		b2 = n;
	}
	void show()
	{
		cout << "b1=" << b1 << endl;
		cout << "b2=" << b2 << endl;
	}
};
class Derived :public Base                     //声明一个公有派生类
{
private:
	int d;
public:
	void setall(int m, int n, int l)
	{
		set(m, n);
		d = l;
	}
	void showall()
	{
		//cout << "b1=" << b1 << endl;               //无法访问基类的私有成员b1
		//cout << "b2=" << b2 << endl;              //b2成为派生类的保护成员，可以访问
		show();
		cout << "d=" << d << endl;
	}
};
int main()
{
	Derived obj;
	obj.setall(30, 40, 50);
	obj.show();
	obj.showall();
    system("pause");
    return 0;
}