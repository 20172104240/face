// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
using namespace std;
class HLong
{
private:
	double inch;
	double foot;
public:

	void match(double m)
	{
		foot = m*3.280399;
		inch = (foot - 32) * 12;
	}
	void display()
	{
		cout << "inch=" << inch << "foot=" << foot << endl;
	}
};
int main()
{
	HLong ob;
	double m = 0;
	cin >> m;
	ob.match(m);
	ob.display();
	return 0;
}

