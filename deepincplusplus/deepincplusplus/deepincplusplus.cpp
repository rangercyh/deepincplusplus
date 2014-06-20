// deepincplusplus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "common.h"


int _tmain(int argc, _TCHAR* argv[])
{
	_LARGE_INTEGER time_start;
	START_TIME(time_start);

	// ���������ε��ø��ຯ�����麯����
	class a {
	public:
		virtual ~a() {}
		virtual void x() { cout << 'x' << endl; }
		void y() { cout << 'y' << endl; }
		virtual void z() { cout << 'z' << endl; }
	};

	class b : public a {
	public:
		b() : m(0) {}
		int m;
		virtual void z() { cout << "I am child z()" << endl; }
		void y() { cout << "I am child y()" << endl; }
	};

	// ���Կ���������������˸���ĺ�������ôֱ�ӵ���ʱ�����ȵ������ຯ��
	// ��������û�����صĺ����������ڸ����ﶨ������麯�����Ƿ��麯���������������ø��ຯ��
	// ֵ��һ����ǣ����ж��Ƿ������غ���ʱ�������ĸ���������Ҳ��Ҫƥ�䣬������Ϊ�����غ���
	b *p = new b;
	p->x();	// x
	p->y();	// I am child y()
	p->z();	// I am child z()

	// ���Ƽ���ô������һ���������ת�ɸ�����������������ݶ�ʧ
	// ָ��q���ڱ�ú�Σ�գ�q���õ�ȫ�����Ǹ��ຯ����
	// �����ַ�ʽ���ж����ת������ôp�����һ������ָ�뻹�Ǹ���ָ��������ν��
	// ��Ϊת������ָ����ָ�Ķ���
	a *q = &(a)(*p);	
	q->z();	// z

	// C++�Ƽ���������ʹ��dynamic_cast����ָ���ת������������ת�����޷����ø�����麯��
	// ������ָ��ת���ɸ���ָ��֮��ֻ�ܵ��ø���ķ��麯������Щ�麯��ֻҪ�����า�ǹ����޷����õ�
	a *r = dynamic_cast<a *>(p);
	r->z();	// I am child z()
	r->y();	// y


	PRINT_TIME(time_start);
	return 0;
}

