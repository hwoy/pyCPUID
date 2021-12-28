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
$ python setup.py install
$ python CPUID.py
```

## Example
```
CPU ID: GenuineIntel
CPU name: Intel(R) Core(TM) i5-3230M CPU @ 2.60GHz

CPU Version Information
Family: 6
Model: A
Step: 9
ex-Family: 6
ex-Model: 3A

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
21:ds:Debug store: save trace of executed jumps
22:acpi:Onboard thermal control MSRs for ACPI
23:mmx:MMX instructions
24:fxsr:FXSAVE, FXRESTOR instructions, CR4 bit 9
25:sse:SSE instructions (a.k.a. Katmai New Instructions)
26:sse2:SSE2 instructions
27:ss:CPU cache implements self-snoop
28:htt:Hyper-threading
29:tm:Thermal monitor automatically limits temperature
31:pbe:Pending Break Enable (PBE# pin) wakeup capability

============== EAX=1,ECX bit features ==============
0:sse3:Prescott New Instructions-SSE3 (PNI)
1:pclmulqdq:PCLMULQDQ
2:dtes64:64-bit debug store (edx bit 21)
3:monitor:MONITOR and MWAIT instructions (SSE3)
4:ds-cpl:CPL qualified debug store
5:vmx:Virtual Machine eXtensions
7:est:Enhanced SpeedStep
8:tm2:Thermal Monitor 2
9:ssse3:Supplemental SSE3 instructions
13:cx16:CMPXCHG16B instruction
14:xtpr:Can disable sending task priority messages
15:pdcm:Perfmon & debug capability
17:pcid:Process context identifiers (CR4 bit 17)
19:sse4.1:SSE4.1 instructions
20:sse4.2:SSE4.2 instructions
21:x2apic:x2APIC
23:popcnt:POPCNT instruction
24:tsc-deadline:APIC implements one-shot operation using a TSC deadline value
25:aes:AES instruction set
26:xsave:XSAVE, XRESTOR, XSETBV, XGETBV
27:osxsave:XSAVE enabled by OS
28:avx:Advanced Vector Extensions
29:f16c:F16C (half-precision) FP feature
30:rdrnd:RDRAND (on-chip random number generator) feature

============== EAX=7,ECX=0,EBX bit features ==============
0:fsgsbase:Access to base of %fs and %gs
7:smep:Supervisor Mode Execution Prevention
9:erms:Enhanced REP MOVSB/STOSB

============== EAX=7,ECX=0,ECX bit features ==============

============== EAX=7,ECX=0,EDX bit features ==============

============== EAX=0x80000001,EDX bit features ==============
11:syscall:SYSCALL and SYSRET instructions
20:nx:NX bit
27:rdtscp:RDTSCP instruction
29:lm:Long mode

============== EAX=0x80000001,ECX bit features ==============
0:lahf_lm:LAHF/SAHF in long mode

```


- Email: booskillerz@gmail.com
- FB: facebook.com/watt.duean