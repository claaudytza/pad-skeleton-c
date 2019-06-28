#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../include/ijvm.h"



int test(){
    return 1;
}

//


int main () {

    int what = test();
    printf("what %X %d", MAGIC_NUMBER, what);
}

