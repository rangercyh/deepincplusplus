#pragma once
#include <iostream>
#include <windows.h>

using namespace std;

#define START_TIME(time_start) 	\
	do  \
	{  \
	QueryPerformanceCounter(&time_start);	\
	} while (false)


#define PRINT_TIME(time_start)	\
	do  \
	{  \
	LARGE_INTEGER f;	\
	QueryPerformanceFrequency(&f);	\
	_LARGE_INTEGER time_over;	\
	QueryPerformanceCounter(&time_over);	\
	cout << endl << "ºÄÊ±£º" << (time_over.QuadPart - time_start.QuadPart) / (double)f.QuadPart << "Ãë" << endl;	\
	system("pause");	\
	} while (false)



