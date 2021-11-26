#include "main.h"

int main()
{
	#ifndef __x86_64__
	if(!testcpuid())
	{
		fprintf(stderr,"Your CPU doesn't support CPUID instruction!\n");
		return 0;
	}
	#endif

	printCPUManID();
	printCPUBrand();
	putchar('\n');
	
	printCPUVerInfo();
	
	putchar('\n');
	
	printCPUflags();

	
	return 0;
}
