#ifndef __CPUID_H__
#define __CPUID_H__

#include <stdint.h>

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


#ifdef __XCPUID_PYTHON_MODULE__
	#define SPECIFIER static
#else
	#define SPECIFIER
#endif

#ifndef __x86_64__
SPECIFIER int testcpuid (void);
#endif

SPECIFIER struct REG CPUID(const struct REG* reg);

SPECIFIER const char *getCPUManID(CPUMANIDSTR cpustr);

SPECIFIER const char *getCPUBrand(CPUBRANDSTR cpustr);

SPECIFIER union CPUVERINFO getCPUVerInfo();



#endif
