#include "../include/ijvm.h"

bool step() {
    int d;
    switch (d) {
        case OP_BIPUSH:
            bipush();
            break;
        case OP_DUP:
            dup();
            break;
        case OP_ERR:
            err();
            break;
        case OP_GOTO:
            gotoFunction();
            break;
        case OP_HALT:
            halt();
            break;
        case OP_IADD:
            add();
            break;
        case OP_IAND:
            iand();
            break;
        case OP_IFEQ:
            ifeq();
            break;
        case OP_IFLT:
            iflt();
            break;
        case OP_ICMPEQ:
            icmpeq();
            break;
        case OP_IINC: 
            iinc();
            break;
        case OP_ILOAD: 
            iload();
            break;
        case OP_IN: 
            in();
            break;
        case OP_INVOKEVIRTUAL: 
            invokevirtual();
            break;
        case OP_IOR: 
            ior();
            break;
        case OP_IRETURN: 
            ireturn();
            break;
        case OP_ISTORE: 
            istore();
            break;
        case OP_ISUB:
            isub();
            break;
        case OP_LDC_W: 
            ldc_w();
            break;
        case OP_NOP: 
            nop();
            break;
        case OP_OUT: 
            out();
            break;
        case OP_POP:
            pop();
            break;
        case OP_SWAP:
            swap();
            break;
        case OP_WIDE:
            wide();
            break;
        // default: return 0;
    };
    return 0;
};

int bipush();



