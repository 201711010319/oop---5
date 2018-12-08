/*********************************************
Topic :第五章例5.1
Author:Qiu xiaoli
Date  :2018 -11 -16 -18:37:20

**********************************************/
#include<iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << "创建A" << endl;
		getchar();
	}
	~A()
	{
		cout << "析构A" << endl;
		getchar();
	}
};
class B
{
public:
	B()
	{
		cout << "创建B" << endl;
		getchar();

	}
	~B()
	{
		cout << "析构B" << endl;
		getchar();

	}
private:
	A a;            //对象成员，B类包含了A类
};


int main()
{

	B obj;



system("pause");
return 0;
}