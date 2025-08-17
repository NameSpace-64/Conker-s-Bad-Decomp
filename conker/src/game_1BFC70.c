#include <ultra64.h>
#include "functions.h"
#include "variables.h"



void func_151927C0(struct114* arg0) {
    s16 temp = (arg0->unk14 & 0xFF) >> 1;

    arg0->unk38 = 0x12C;
    arg0->unk3A = 0xA;
    arg0->unk14 = (temp << 16) + temp;
    arg0->unk3B = 0;
}
