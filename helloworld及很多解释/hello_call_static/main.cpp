#include "stdio.h"

extern "C" {
	#include "hello.h"
}

int main()
{
	HelloCMake();

	getchar();

	return 0;
}