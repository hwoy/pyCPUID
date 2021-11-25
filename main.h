#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdint.h>
#include <stdio.h>

#include "CPUID.h"
#include "flagsdata.h"

static void printCPUManID()
{
	CPUMANIDSTR cpustr;
	printf("CPU ID: %s\n",getCPUManID(cpustr));
}

static void printCPUBrand()
{
	CPUBRANDSTR cpustr;
	printf("CPU name: %s\n",getCPUBrand(cpustr));
}

static void printCPUVerInfo()
{
	const union CPUVERINFO cpuinfo=getCPUVerInfo();
	printf("CPU Version Information\n");
	printf("Family: %u\n",cpuinfo.info.family);
	printf("Model: %u\n",cpuinfo.info.model);
	printf("Step: %u\n",cpuinfo.info.step);
	printf("ex-Family: %u\n",cpuinfo.info.family==15 ? cpuinfo.info.ex_family+cpuinfo.info.family:cpuinfo.info.family);
	printf("ex-Model: %u\n",cpuinfo.info.family==6 || cpuinfo.info.family==15 ? (cpuinfo.info.ex_model<<4)+cpuinfo.info.model :cpuinfo.info.model);
}

static void printflagsdata(uint32_t reg,const struct flagsdata *data)
{
	
	for(unsigned int i=0;i<sizeof(uint32_t)*8;++i)
	{
		if((((uint32_t)1)<<data[i].bit)&reg)
		{
			if(data[i].sfeature && data[i].feature)
			{
				printf("%u:%s:%s\n",data[i].bit,data[i].sfeature,data[i].feature);
			}
		}
	}
}

static void printCPUflags()
{
	{
		printf("============== EAX=1,EDX bit features ==============\n");
		struct REG reg;
		reg.eax.value=1;
		const struct REG oreg=CPUID(&reg);
		printflagsdata(oreg.edx.value,eax1_edx);
		
		putchar('\n');
		printf("============== EAX=1,ECX bit features ==============\n");
		printflagsdata(oreg.ecx.value,eax1_ecx);
	}
	
	{
		putchar('\n');
		printf("============== EAX=7,ECX=0,EBX bit features ==============\n");
		struct REG reg;
		reg.eax.value=7;reg.ecx.value=0;
		const struct REG oreg=CPUID(&reg);
		printflagsdata(oreg.ebx.value,eax7_ecx0_ebx);
		putchar('\n');
		printf("============== EAX=7,ECX=0,ECX bit features ==============\n");
		printflagsdata(oreg.ecx.value,eax7_ecx0_ecx);
		putchar('\n');
		printf("============== EAX=7,ECX=0,EDX bit features ==============\n");
		printflagsdata(oreg.edx.value,eax7_ecx0_edx);
		
		if(oreg.eax.value>0)
		{
			reg.eax.value=7;reg.ecx.value=1;
			const struct REG oreg=CPUID(&reg);
			putchar('\n');
			printf("============== EAX=7,ECX=1,EAX bit features ==============\n");
			printflagsdata(oreg.eax.value,eax7_ecx1_eax);
		}
		
	}
	
	{
		struct REG reg;
		reg.eax.value=0x80000000;
		const struct REG oreg=CPUID(&reg);
		if(oreg.eax.value>0x80000000)
		{
			struct REG reg;
			reg.eax.value=0x80000001;
			const struct REG oreg=CPUID(&reg);
			putchar('\n');
			printf("============== EAX=0x80000001,EDX bit features ==============\n");
			printflagsdata(oreg.edx.value,eax80000001h_edx);
			putchar('\n');
			printf("============== EAX=0x80000001,ECX bit features ==============\n");
			printflagsdata(oreg.ecx.value,eax80000001h_ecx);
		}
	}
}

#endif