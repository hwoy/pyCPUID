#include "CPUID.h"

#ifndef NULL
#define NULL ((void *)0)
#endif

#ifndef __x86_64__
SPECIFIER int testcpuid (void)
{
  int ret;
  __asm__ volatile( "pushfl\n\t"
                    "pushfl\n\t"
                    "xorl $0x00200000,(%%esp)\n\t"
                    "popfl\n\t"
                    "pushfl\n\t"
                    "popl %%eax\n\t"
                    "xorl (%%esp),%%eax\n\t"
                    "popfl\n\t"
                    "andl $0x00200000,%%eax"
                    :"=a"(ret)
  );

  return ret;
}
#endif

SPECIFIER struct REG CPUID(const struct REG* reg)
{
	struct REG oreg;
	__asm__ volatile("cpuid":
	"=a" (oreg.eax.value), "=b" (oreg.ebx.value), "=c" (oreg.ecx.value), "=d" (oreg.edx.value):
	"a" (reg->eax.value), "b" (reg->ebx.value), "c" (reg->ecx.value), "d" (reg->edx.value)); 
			
	return oreg;

}


SPECIFIER const char *getCPUManID(CPUMANIDSTR cpustr)
{
	struct REG reg={{.value=0},{.value=0},{.value=0},{.value=0}};
	
	reg.eax.value=0;
	const struct REG oreg=CPUID(&reg);
	((uint32_t *)cpustr)[0] =oreg.ebx.value;
	((uint32_t *)cpustr)[1] =oreg.edx.value;
	((uint32_t *)cpustr)[2] =oreg.ecx.value;
	
	cpustr[sizeof(uint32_t)*3]=0;
	
	return cpustr;
}

static const char *trimleft(const CPUBRANDSTR cpustr)
{
	unsigned int i=0;

	while((cpustr[i]==0x20 || cpustr[i]=='\t') && cpustr[i]) ++i;

	return cpustr+i;
}

SPECIFIER const char *getCPUBrand(CPUBRANDSTR cpustr)
{
	struct REG reg={{.value=0},{.value=0},{.value=0},{.value=0}};
	reg.eax.value=0x80000000;
	struct REG oreg=CPUID(&reg);
	
	if(oreg.eax.value<0x80000004)
	{
		return NULL;
	}
	
	
	for(uint32_t j=0x80000002,i=0;j<=0x80000004;++j)
	{
		struct REG reg={{.value=0},{.value=0},{.value=0},{.value=0}};
		reg.eax.value=j;
		const struct REG oreg=CPUID(&reg);
		
		((uint32_t *)cpustr)[i++] =oreg.eax.value;
		((uint32_t *)cpustr)[i++] =oreg.ebx.value;
		((uint32_t *)cpustr)[i++] =oreg.ecx.value;
		((uint32_t *)cpustr)[i++] =oreg.edx.value;
		
	}
	
	cpustr[sizeof(uint32_t)*12]=0;
	
	return trimleft(cpustr);
}

#ifndef __XCPUID_PYTHON_MODULE__
SPECIFIER union CPUVERINFO getCPUVerInfo()
{
	struct REG reg={{.value=0},{.value=0},{.value=0},{.value=0}};
	reg.eax.value=1;
	const struct REG oreg=CPUID(&reg);
	
	union CPUVERINFO cpuinfo;
	cpuinfo.value=oreg.eax.value;
	
	return cpuinfo;
}
#endif
