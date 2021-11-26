# pyCPUID
- CPUID in C
- CPUID for Python module


## How to build (C program)
```sh
$ make
```
## How to build (Python(version 3.9.9 on Windows) module)
```sh
$ python setup.py build --compiler mingw32
$ python setup.py
```

## Example
```
CPU ID: AuthenticAMD
CPU name: AMD Ryzen 5 2600X Six-Core Processor           

CPU Version Information
Family: 15
Model: 8
Step: 2
ex-Family: 23
ex-Model: 8

============== EAX=1,EDX bit features ==============
0:fpu:Onboard x87 FPU
1:vme:Virtual 8086 mode extensions (such as VIF, VIP, PIV)
2:de:Debugging extensions (CR4 bit 3)
3:pse:Page Size Extension
4:tsc:Time Stamp Counter
5:msr:Model-specific registers
6:pae:Physical Address Extension
7:mce:Machine Check Exception
8:cx8:CMPXCHG8 (compare-and-swap) instruction
9:apic:Onboard Advanced Programmable Interrupt Controller
11:sep:SYSENTER and SYSEXIT instructions
12:mtrr:Memory Type Range Registers
13:pge:Page Global Enable bit in CR4
14:mca:Machine check architecture
15:cmov:Conditional move and FCMOV instructions
16:pat:Page Attribute Table
17:pse-36:36-bit page size extension
19:clfsh:CLFLUSH instruction (SSE2)
23:mmx:MMX instructions
24:fxsr:FXSAVE, FXRESTOR instructions, CR4 bit 9
25:sse:SSE instructions (a.k.a. Katmai New Instructions)
26:sse2:SSE2 instructions
28:htt:Hyper-threading

============== EAX=1,ECX bit features ==============
0:sse3:Prescott New Instructions-SSE3 (PNI)
1:pclmulqdq:PCLMULQDQ
3:monitor:MONITOR and MWAIT instructions (SSE3)
9:ssse3:Supplemental SSE3 instructions
12:fma:Fused multiply-add (FMA3)
13:cx16:CMPXCHG16B instruction
19:sse4.1:SSE4.1 instructions
20:sse4.2:SSE4.2 instructions
22:movbe:MOVBE instruction (big-endian)
23:popcnt:POPCNT instruction
25:aes:AES instruction set
26:xsave:XSAVE, XRESTOR, XSETBV, XGETBV
27:osxsave:XSAVE enabled by OS
28:avx:Advanced Vector Extensions
29:f16c:F16C (half-precision) FP feature
30:rdrnd:RDRAND (on-chip random number generator) feature

============== EAX=7,ECX=0,EBX bit features ==============
0:fsgsbase:Access to base of %fs and %gs
3:bmi1:Bit Manipulation Instruction Set 1
5:avx2:Advanced Vector Extensions 2
7:smep:Supervisor Mode Execution Prevention
8:bmi2:Bit Manipulation Instruction Set 2
18:rdseed:RDSEED instruction
19:adx:Intel ADX (Multi-Precision Add-Carry Instruction Extensions)
20:smap:Supervisor Mode Access Prevention
23:clflushopt:CLFLUSHOPT instruction
29:sha:Intel SHA extensions

============== EAX=7,ECX=0,ECX bit features ==============

============== EAX=7,ECX=0,EDX bit features ==============

============== EAX=0x80000001,EDX bit features ==============
0:fpu:Onboard x87 FPU
1:vme:Virtual mode extensions (VIF)
2:de:Debugging extensions (CR4 bit 3)
3:pse:Page Size Extension
4:tsc:Time Stamp Counter
5:msr:Model-specific registers
6:pae:Physical Address Extension
7:mce:Machine Check Exception
8:cx8:CMPXCHG8 (compare-and-swap) instruction
9:apic:Onboard Advanced Programmable Interrupt Controller
11:syscall:SYSCALL and SYSRET instructions
12:mtrr:Memory Type Range Registers
13:pge:Page Global Enable bit in CR4
14:mca:Machine check architecture
15:cmov:Conditional move and FCMOV instructions
16:pat:Page Attribute Table
17:pse36:36-bit page size extension
20:nx:NX bit
22:mmxext:Extended MMX
23:mmx:MMX instructions
24:fxsr:FXSAVE, FXRSTOR instructions, CR4 bit 9
25:fxsr_opt:FXSAVE/FXRSTOR optimizations
26:pdpe1gb:Gigabyte pages
27:rdtscp:RDTSCP instruction
29:lm:Long mode

============== EAX=0x80000001,ECX bit features ==============
0:lahf_lm:LAHF/SAHF in long mode
1:cmp_legacy:Hyperthreading not valid
2:svm:Secure Virtual Machine
3:extapic:Extended APIC space
4:cr8_legacy:CR8 in 32-bit mode
5:abm:Advanced bit manipulation (lzcnt and popcnt)
6:sse4a:SSE4a
7:misalignsse:Misaligned SSE mode
8:3dnowprefetch:PREFETCH and PREFETCHW instructions
9:osvw:OS Visible Workaround
12:skinit:SKINIT/STGI instructions
13:wdt:Watchdog timer
17:tce:Translation Cache Extension
22:topoext:Topology Extensions
23:perfctr_core:Core performance counter extensions
24:perfctr_nb:NB performance counter extensions
26:dbx:Data breakpoint extensions
28:pcx_l2i:L2I perf counter extensions
```


- Email: booskillerz@gmail.com
- FB: facebook.com/watt.duean