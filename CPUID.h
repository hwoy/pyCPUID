#ifndef __CPUID_H__
#define __CPUID_H__

#include <stdint.h>

#ifndef __x86_64__
int testcpuid (void);
#endif

union REG16
{
	struct
	{
		uint16_t L:8;
		uint16_t H:8;
	}reg16;
	uint16_t E;
};

union REG32
{
	union REG16 reg16;
	uint32_t reg32;

};

struct REG
{
	union REG32 eax,ebx,ecx,edx;
};


typedef char CPUMANIDSTR[sizeof(uint32_t)*3+1]; 



typedef char CPUBRANDSTR[sizeof(uint32_t)*12+1];


union CPUVERINFO
{
	struct
	{
		uint32_t step:4;
		uint32_t model:4;
		uint32_t family:4;
		uint32_t type:2;
		uint32_t reserve1:2;
		uint32_t ex_model:4;
		uint32_t ex_family:8;
		uint32_t reserve2:4;
		
	}info;
	
	uint32_t value;
};

struct REG CPUID(const struct REG* reg);

const char *getCPUManID(CPUMANIDSTR cpustr);

const char *getCPUBrand(CPUBRANDSTR cpustr);

union CPUVERINFO getCPUVerInfo();



#endif
