// deepincplusplus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "common.h"
#include "question_1.h"


int _tmain(int argc, _TCHAR* argv[])
{
	_LARGE_INTEGER time_start;
	START_TIME(time_start);

	question_1();


	PRINT_TIME(time_start);
	return 0;
}

