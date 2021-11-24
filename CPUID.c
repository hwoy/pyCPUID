#include "CPUID.h"

#ifndef __x86_64__
int testcpuid (void)
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

struct REG CPUID(const struct REG* reg)
{
	struct REG oreg;
	    __asm__ volatile("cpuid": "=a" (oreg.eax.reg32), "=b" (oreg.ebx.reg32), "=c" (oreg.ecx.reg32), "=d" (oreg.edx.reg32): "a" (reg->eax.reg32), "b" (reg->ebx.reg32), "c" (reg->ecx.reg32), "d" (reg->edx.reg32)); 
			
	return oreg;

}


const char *getCPUManID(CPUMANIDSTR cpustr)
{
	struct REG reg;
	
	reg.eax.reg32=0;
	const struct REG oreg=CPUID(&reg);
	((uint32_t *)cpustr)[0] =oreg.ebx.reg32;
	((uint32_t *)cpustr)[1] =oreg.edx.reg32;
	((uint32_t *)cpustr)[2] =oreg.ecx.reg32;
	
	cpustr[sizeof(uint32_t)*3]=0;
	
	return cpustr;
}


const char *getCPUBrand(CPUBRANDSTR cpustr)
{
	struct REG reg;
	reg.eax.reg32=0x80000000;
	struct REG oreg=CPUID(&reg);
	
	if(oreg.eax.reg32<0x80000004)
	{
		return NULL;
	}
	
	
	for(uint32_t j=0x80000002,i=0;j<=0x80000004;++j)
	{
		struct REG reg;
		reg.eax.reg32=j;
		const struct REG oreg=CPUID(&reg);
		
		((uint32_t *)cpustr)[i++] =oreg.eax.reg32;
		((uint32_t *)cpustr)[i++] =oreg.ebx.reg32;
		((uint32_t *)cpustr)[i++] =oreg.ecx.reg32;
		((uint32_t *)cpustr)[i++] =oreg.edx.reg32;
		
	}
	
	cpustr[sizeof(uint32_t)*12]=0;
	
	return cpustr;
}

union CPUVERINFO getCPUVerInfo()
{
	struct REG reg;
	reg.eax.reg32=1;
	const struct REG oreg=CPUID(&reg);
	
	union CPUVERINFO cpuinfo;
	cpuinfo.value=oreg.eax.reg32;
	
	return cpuinfo;
}

