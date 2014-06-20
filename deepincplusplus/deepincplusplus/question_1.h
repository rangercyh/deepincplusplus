#pragma once


#include <iostream>

using namespace std;


void question_1()
{
	const char *question = "question_1";
	cout << endl << question << ":子类对象如何调用父类函数和虚函数？" << endl;
	class a {
	public:
		virtual ~a() {}
		virtual void x() { cout << 'x' << endl; }
		void y() { cout << 'y' << endl; }
		virtual void z() { cout << 'z' << endl; }
	};

	class b : public a {
	public:
		b() {}
		virtual void z() { cout << "I am child z()" << endl; }
		void y() { cout << "I am child y()" << endl; }
	};

	// 可以看到子类如果重载了父类的函数，那么直接调用时，优先调用子类函数
	// 对于子类没有重载的函数，无论在父类里定义的是虚函数还是非虚函数都可以正常调用父类函数
	// 值得一提的是，在判断是否是重载函数时，参数的个数和类型也需要匹配，否则不认为是重载函数
	b *p = new b;
	p->x();	// x
	p->y();	// I am child y()
	p->z();	// I am child z()

	// 不推荐这么做，把一个子类对象转成父类对象会造成子类数据丢失
	// 指针q现在变得很危险，q调用的全部都是父类函数了
	// 用这种方式进行对象的转换，那么p最初是一个子类指针还是父类指针是无所谓的
	// 因为转换的是指针所指的对象
	a *q = &(a)(*p);
	q->z();	// z

	// C++推荐的做法是使用dynamic_cast进行指针的转换，不过这种转换就无法调用父类的虚函数
	// 把子类指针转换成父类指针之后只能调用父类的非虚函数，那些虚函数只要被子类覆盖过就无法调用到
	a *r = dynamic_cast<a *>(p);
	r->z();	// I am child z()
	r->y();	// y

	cout << question << ":结束" << endl;
}