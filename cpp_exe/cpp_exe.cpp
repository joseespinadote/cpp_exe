// cpp_exe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if (argc > 1)
	{
		printf("%f", atof(argv[1]) / atof(argv[2]));
		return 0;
	}
	else {
		printf("error:solo funciono con 2 parametros\n");
		return -1;
	}
}
