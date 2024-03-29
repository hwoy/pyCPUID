#ifndef __FLAGSDATA_H__
#define __FLAGSDATA_H__

#ifndef NULL
#define NULL ((void *)0)
#endif

struct flagsdata
{
	unsigned int bit;
	const char *sfeature;
	const char *feature;
	
};

static const struct flagsdata eax1_edx[]={

{0	,"fpu",	"Onboard x87 FPU"},
{1	,"vme",	"Virtual 8086 mode extensions (such as VIF, VIP, PIV)"},
{2	,"de",	"Debugging extensions (CR4 bit 3)"},
{3	,"pse",	"Page Size Extension"},
{4	,"tsc",	"Time Stamp Counter"},
{5	,"msr",	"Model-specific registers"},
{6	,"pae",	"Physical Address Extension"},
{7	,"mce",	"Machine Check Exception"},
{8	,"cx8",	"CMPXCHG8 (compare-and-swap) instruction"},
{9	,"apic",	"Onboard Advanced Programmable Interrupt Controller"},
{10	,NULL,NULL},	
{11	,"sep",	"SYSENTER and SYSEXIT instructions"},
{12	,"mtrr",	"Memory Type Range Registers"},
{13	,"pge",	"Page Global Enable bit in CR4"},
{14	,"mca",	"Machine check architecture"},
{15	,"cmov",	"Conditional move and FCMOV instructions"},
{16	,"pat",	"Page Attribute Table"},
{17	,"pse-36",	"36-bit page size extension"},
{18	,"psn",	"Processor Serial Number"},
{19	,"clfsh",	"CLFLUSH instruction (SSE2)"},
{20	,NULL,NULL},	
{21	,"ds",	"Debug store: save trace of executed jumps"},
{22	,"acpi",	"Onboard thermal control MSRs for ACPI"},
{23	,"mmx",	"MMX instructions"},
{24	,"fxsr",	"FXSAVE, FXRESTOR instructions, CR4 bit 9"},
{25	,"sse",	"SSE instructions (a.k.a. Katmai New Instructions)"},
{26	,"sse2",	"SSE2 instructions"},
{27	,"ss",	"CPU cache implements self-snoop"},
{28	,"htt",	"Hyper-threading"},
{29	,"tm",	"Thermal monitor automatically limits temperature"},
{30	,"ia64",	"IA64 processor emulating x86"},
{31	,"pbe",	"Pending Break Enable (PBE# pin) wakeup capability"}

};

static const struct flagsdata eax1_ecx[]={
	
{0,	"sse3",	"Prescott New Instructions-SSE3 (PNI)"},
{1,	"pclmulqdq",	"PCLMULQDQ"},
{2,	"dtes64",	"64-bit debug store (edx bit 21)"},
{3,	"monitor",	"MONITOR and MWAIT instructions (SSE3)"},
{4,	"ds-cpl",	"CPL qualified debug store"},
{5,	"vmx",	"Virtual Machine eXtensions"},
{6,	"smx",	"Safer Mode Extensions (LaGrande)"},
{7,	"est",	"Enhanced SpeedStep"},
{8,	"tm2",	"Thermal Monitor 2"},
{9,	"ssse3",	"Supplemental SSE3 instructions"},
{10,	"cnxt-id",	"L1 Context ID"},
{11,	"sdbg",	"Silicon Debug interface"},
{12,	"fma",	"Fused multiply-add (FMA3)"},
{13,	"cx16",	"CMPXCHG16B instruction"},
{14,	"xtpr",	"Can disable sending task priority messages"},
{15,	"pdcm",	"Perfmon & debug capability"},
{16,	NULL,NULL},	
{17,	"pcid",	"Process context identifiers (CR4 bit 17)"},
{18,	"dca",	"Direct cache access for DMA writes"},
{19,	"sse4.1",	"SSE4.1 instructions"},
{20,	"sse4.2",	"SSE4.2 instructions"},
{21,	"x2apic",	"x2APIC"},
{22,	"movbe",	"MOVBE instruction (big-endian)"},
{23,	"popcnt",	"POPCNT instruction"},
{24,	"tsc-deadline",	"APIC implements one-shot operation using a TSC deadline value"},
{25,	"aes",	"AES instruction set"},
{26,	"xsave",	"XSAVE, XRESTOR, XSETBV, XGETBV"},
{27,	"osxsave",	"XSAVE enabled by OS"},
{28,	"avx",	"Advanced Vector Extensions"},
{29,	"f16c",	"F16C (half-precision) FP feature"},
{30,	"rdrnd",	"RDRAND (on-chip random number generator) feature"},
{31,	"hypervisor",	"Hypervisor present (always zero on physical CPUs)"}

};

static const struct flagsdata eax7_ecx0_ebx[]={
	
{0	,"fsgsbase",	"Access to base of %fs and %gs"},
{1	,"",	"IA32_TSC_ADJUST"},
{2	,"sgx",	"Software Guard Extensions"},
{3	,"bmi1",	"Bit Manipulation Instruction Set 1"},
{4	,"hle",	"TSX Hardware Lock Elision"},
{5	,"avx2",	"Advanced Vector Extensions 2"},
{6	,"",	"FDP_EXCPTN_ONLY"},
{7	,"smep",	"Supervisor Mode Execution Prevention"},
{8	,"bmi2",	"Bit Manipulation Instruction Set 2"},
{9	,"erms",	"Enhanced REP MOVSB/STOSB"},
{10	,"invpcid",	"INVPCID instruction"},
{11	,"rtm",	"TSX Restricted Transactional Memory"},
{12	,"pqm",	"Platform Quality of Service Monitoring"},
{13	,"FPU", "CS and FPU DS deprecated"},
{14	,"mpx",	"Intel MPX (Memory Protection Extensions)"},
{15	,"pqe",	"Platform Quality of Service Enforcement"},
{16	,"avx512_f",	"AVX-512 Foundation"},
{17	,"avx512_dq",	"AVX-512 Doubleword and Quadword Instructions"},
{18	,"rdseed",	"RDSEED instruction"},
{19	,"adx",	"Intel ADX (Multi-Precision Add-Carry Instruction Extensions)"},
{20	,"smap",	"Supervisor Mode Access Prevention"},
{21	,"avx512_ifma",	"AVX-512 Integer Fused Multiply-Add Instructions"},
{22	,"pcommit",	"PCOMMIT instruction"},
{23	,"clflushopt",	"CLFLUSHOPT instruction"},
{24	,"clwb",	"CLWB instruction"},
{25	,"intel_pt",	"Intel Processor Trace"},
{26	,"avx512_pf",	"AVX-512 Prefetch Instructions"},
{27	,"avx512_er",	"AVX-512 Exponential and Reciprocal Instructions"},
{28	,"avx512_cd",	"AVX-512 Conflict Detection Instructions"},
{29	,"sha",	"Intel SHA extensions"},
{30	,"avx512_bw",	"AVX-512 Byte and Word Instructions"},
{31	,"avx512_vl",	"AVX-512 Vector Length Extensions"}

};

static const struct flagsdata eax7_ecx0_ecx[]={

{0	,"prefetchwt1",	"PREFETCHWT1 instruction"},
{1	,"avx512_vbmi",	"AVX-512 Vector Bit Manipulation Instructions"},
{2	,"umip",	"User-mode Instruction Prevention"},
{3	,"pku",	"Memory Protection Keys for User-mode pages"},
{4	,"ospke",	"PKU enabled by OS"},
{5	,"waitpkg",	"Timed pause and user-level monitor/wait"},
{6	,"avx512_vbmi2",	"AVX-512 Vector Bit Manipulation Instructions 2"},
{7	,"cet_ss",	"Control flow enforcement (CET) shadow stack"},
{8	,"gfni",	"Galois Field instructions"},
{9	,"vaes",	"Vector AES instruction set (VEX-256/EVEX)"},
{10	,"vpclmulqdq",	"CLMUL instruction set (VEX-256/EVEX)"},
{11	,"avx512_vnni",	"AVX-512 Vector Neural Network Instructions"},
{12	,"avx512_bitalg",	"AVX-512 BITALG instructions"},
{13	,"TME_EN",	"IA32_TME related MSRs are supported"},
{14	,"avx512_vpopcntdq",	"AVX-512 Vector Population Count Double and Quad-word"},
{15	,NULL,NULL},	
{16	,"",	"5-level paging"},
{17	,"mawau",	"The value of userspace MPX Address-Width Adjust used by the BNDLDX and BNDSTX Intel MPX instructions in 64-bit mode"},
{18	,"mawau",	"The value of userspace MPX Address-Width Adjust used by the BNDLDX and BNDSTX Intel MPX instructions in 64-bit mode"},	
{19	,"mawau",	"The value of userspace MPX Address-Width Adjust used by the BNDLDX and BNDSTX Intel MPX instructions in 64-bit mode"},	
{20	,"mawau",	"The value of userspace MPX Address-Width Adjust used by the BNDLDX and BNDSTX Intel MPX instructions in 64-bit mode"},	
{21	,"mawau",	"The value of userspace MPX Address-Width Adjust used by the BNDLDX and BNDSTX Intel MPX instructions in 64-bit mode"},	
{22	,"rdpid",	"Read Processor ID and IA32_TSC_AUX"},
{23	,"KL",	"Key Locker"},
{24	,NULL,NULL},	
{25	,"cldemote",	"Cache line demote"},
{26	,NULL,NULL},	
{27	,"MOVDIRI",""},
{28	,"MOVDIR64B",""},	
{29	,"ENQCMD",	"Enqueue Stores"},
{30	,"sgx_lc",	"SGX Launch Configuration"},
{31	,"pks",	"Protection keys for supervisor-mode pages"}

};

static const struct flagsdata eax7_ecx0_edx[]={
	
{0	,NULL,NULL},																						
{1	,NULL,NULL},																					
{2	,"avx512_4vnniw","AVX-512 4-register Neural Network Instructions"},																				
{3	,"avx512_4fmaps","AVX-512 4-register Multiply Accumulation Single precision"},
{4	,"fsrm","Fast Short REP MOVSB"},																			
{5	,NULL,NULL},																						
{6	,NULL,NULL},																					
{7	,NULL,NULL},																						
{8	,"avx512_vp2intersect","AVX-512 VP2INTERSECT Doubleword and Quadword Instructions"},																		
{9	,"SRBDS_CTRL","Special Register Buffer Data Sampling Mitigations"},																	
{10	,"md_clear","VERW instruction clears CPU buffers"},															
{11	,NULL,NULL},																						
{12	,NULL,NULL},																						
{13	,"tsx_force_abort",""},																
{14	,"SERIALIZE","Serialize instruction execution"},														
{15	,"Hybrid","Mixture of CPU types in processor topology"},														
{16	,"TSXLDTRK","TSX suspend load address tracking"},													
{17	,NULL,NULL},																						
{18	,"pconfig","Platform configuration (Memory Encryption Technologies Instructions)"},												
{19	,"lbr","Architectural Last Branch Records"},											
{20	,"cet_ibt","Control flow enforcement (CET) indirect branch tracking"},										
{21	,NULL,NULL},																						
{22	,"amx-bf16","Tile computation on bfloat16 numbers"},									
{23	,"AVX512_FP16","AVX512-FP16 half-precision floating-point instructions"},							
{24	,"amx-tile","Tile architecture"},							
{25	,"amx-int8","Tile computation on 8-bit integers"},						
{26	,"IBRS_IBPB / spec_ctrl","Speculation Control, part of Indirect Branch Control (IBC): Indirect Branch Restricted Speculation (IBRS) and Indirect Branch Prediction Barrier (IBPB)"},				
{27	,"stibp","Single Thread Indirect Branch Predictor, part of IBC"},				
{28	,"L1D_FLUSH","IA32_FLUSH_CMD MSR"},			
{29	,"IA32_ARCH_CAPABILITIES","Speculative Side Channel Mitigations"},		
{30	,"IA32_CORE_CAPABILITIES","Support for a MSR listing model-specific core capabilities"},	
{31	,"ssbd","Speculative Store Bypass Disable, as mitigation for Speculative Store Bypass (IA32_SPEC_CTRL)"},

};

static const struct flagsdata eax7_ecx1_eax[]={
	
{0	,NULL,NULL},
{1	,NULL,NULL},
{2	,NULL,NULL},
{3	,NULL,NULL},
{4	,NULL,NULL},
{5	,"avx512_bf16",	"AVX-512 BFLOAT16 instructions"},
{6	,NULL,NULL},
{7	,NULL,NULL},
{8	,NULL,NULL},
{9	,NULL,NULL},
{10	,NULL,NULL},
{11	,NULL,NULL},
{12	,NULL,NULL},
{13	,NULL,NULL},
{14	,NULL,NULL},
{15	,NULL,NULL},
{16	,NULL,NULL},
{17	,NULL,NULL},
{18	,NULL,NULL},
{19	,NULL,NULL},
{20	,NULL,NULL},
{21	,NULL,NULL},
{22	,NULL,NULL},
{23	,NULL,NULL},
{24	,NULL,NULL},
{25	,NULL,NULL},
{26	,NULL,NULL},
{27	,NULL,NULL},
{28	,NULL,NULL},
{29	,NULL,NULL},
{30	,NULL,NULL},
{31	,NULL,NULL}
};

static const struct flagsdata eax80000001h_edx[]={
{0	,"fpu","Onboard x87 FPU"},
{1	,"vme","Virtual mode extensions (VIF)"},
{2	,"de","Debugging extensions (CR4 bit 3)"},
{3	,"pse","Page Size Extension"},
{4	,"tsc","Time Stamp Counter"},
{5	,"msr","Model-specific registers"},
{6	,"pae","Physical Address Extension"},
{7	,"mce","Machine Check Exception"},
{8	,"cx8","CMPXCHG8 (compare-and-swap) instruction"},
{9	,"apic","Onboard Advanced Programmable Interrupt Controller"},
{10	,NULL,NULL},
{11	,"syscall","SYSCALL and SYSRET instructions"},
{12	,"mtrr","Memory Type Range Registers"},
{13	,"pge","Page Global Enable bit in CR4"},
{14	,"mca","Machine check architecture"},
{15	,"cmov","Conditional move and FCMOV instructions"},
{16	,"pat","Page Attribute Table"},
{17	,"pse36","36-bit page size extension"},
{18	,NULL,NULL},
{19	,"mp","Multiprocessor Capable"},
{20	,"nx","NX bit"},
{21	,NULL,NULL},
{22	,"mmxext","Extended MMX"},
{23	,"mmx","MMX instructions"},
{24	,"fxsr","FXSAVE, FXRSTOR instructions, CR4 bit 9"},
{25	,"fxsr_opt","FXSAVE/FXRSTOR optimizations"},
{26	,"pdpe1gb","Gigabyte pages"},
{27	,"rdtscp","RDTSCP instruction"},
{28	,NULL,NULL},
{29	,"lm","Long mode"},
{30	,"3dnowext","Extended 3DNow!"},
{31	,"3dnow","3DNow!"}
};

static const struct flagsdata eax80000001h_ecx[]={
{0	,"lahf_lm","LAHF/SAHF in long mode"},
{1	,"cmp_legacy","Hyperthreading not valid"},
{2	,"svm","Secure Virtual Machine"},
{3	,"extapic","Extended APIC space"},
{4	,"cr8_legacy","CR8 in 32-bit mode"},
{5	,"abm","Advanced bit manipulation (lzcnt and popcnt)"},
{6	,"sse4a","SSE4a"},
{7	,"misalignsse","Misaligned SSE mode"},
{8	,"3dnowprefetch","PREFETCH and PREFETCHW instructions"},
{9	,"osvw","OS Visible Workaround"},
{10	,"ibs","Instruction Based Sampling"},
{11	,"xop","XOP instruction set"},
{12	,"skinit","SKINIT/STGI instructions"},
{13	,"wdt","Watchdog timer"},
{14	,NULL,NULL},	
{15	,"lwp","Light Weight Profiling"},
{16	,"fma4","4 operands fused multiply-add"},
{17	,"tce","Translation Cache Extension"},
{18	,NULL,NULL},	
{19	,"nodeid_msr","NodeID MSR"},
{20	,NULL,NULL},	
{21	,"tbm","Trailing Bit Manipulation"},
{22	,"topoext","Topology Extensions"},
{23	,"perfctr_core","Core performance counter extensions"},
{24	,"perfctr_nb","NB performance counter extensions"},
{25	,NULL,NULL},	
{26	,"dbx","Data breakpoint extensions"},
{27	,"perftsc","Performance TSC"},
{28	,"pcx_l2i","L2I perf counter extensions"},
{29	,NULL,NULL},	
{30	,NULL,NULL},	
{31	,NULL,NULL}

};	



#endif
