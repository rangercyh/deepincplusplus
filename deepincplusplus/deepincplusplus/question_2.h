#pragma once


#include <iostream>

using namespace std;


void question_2()
{
	const char *question = "question_2";
	cout << endl << question << ":�������ķ�������Щ��" << endl;

	class a {
	public:
		a() {}	// �޲ι��캯��
		a(int x) {} // �в����Ĺ��캯��
	};
	// �������
	a x1; // ������a���޲ι��캯��
	a x2();
	a x3(1);
	a *x4 = new a;	// ����a���޲ι��캯��
	a *x5 = new a();
	a *x6 = new a(1);

	a x7[10];
	a x8[10] = { x1, x1, x1 };

	// C++11֮ǰ�޷���new����������
	a *x9 = new a[10];
	a *x10 = new a[10]();
	

	
	// ��������ָ��

	// �����������

	// ��������ָ������


	cout << question << ":����" << endl;
}