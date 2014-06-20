#pragma once


#include <iostream>

using namespace std;


void question_2()
{
	const char *question = "question_2";
	cout << endl << question << ":定义对象的方法有哪些？" << endl;

	class a {
	public:
		a() {}	// 无参构造函数
		a(int x) {} // 有参数的构造函数
	};
	// 定义对象
	a x1; // 调用类a的无参构造函数
	a x2();
	a x3(1);
	a *x4 = new a;	// 调用a的无参构造函数
	a *x5 = new a();
	a *x6 = new a(1);

	a x7[10];
	a x8[10] = { x1, x1, x1 };

	// C++11之前无法对new操作符构造
	a *x9 = new a[10];
	a *x10 = new a[10]();
	

	
	// 定义对象的指针

	// 定义对象数组

	// 定义对象的指针数组


	cout << question << ":结束" << endl;
}