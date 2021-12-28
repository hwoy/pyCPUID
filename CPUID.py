import pyCPUID

def cropbit(val,hi,lo):
    r=0
    for i in range(lo,hi+1):
        r = r | (val & (1<<i))
    
    return(r>>lo)
    

def main():
    print('CPU ID:',pyCPUID.pygetCPUManID())
    print('CPU name:',pyCPUID.pygetCPUBrand())
    print("");
    
    regs=pyCPUID.pyCPUID(1,0,0,0)
    
    info=regs[0]
    
    step = cropbit(info,3,0)
    model = cropbit(info,7,4)
    family= cropbit(info,11,8)
    exmodel = cropbit(info,19,16)
    exfamily= cropbit(info,27,20)
    
    print("CPU Version Information");
    print('Family:',hex(family))
    print('Model:',hex(model))
    print('Step:',hex(step))
    
    if family==15:
        print('ex-Family:',hex(family+exfamily))
    else:
        print('ex-Family:',hex(family))
        
    if family==6 or family==15:
        print('ex-Model:',hex((exmodel<<4)+model))
    else:
        print('ex-Model:',hex(model))
    


if __name__ == '__main__':
    main()
