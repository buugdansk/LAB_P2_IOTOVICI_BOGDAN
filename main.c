#include <stdio.h>

#define USE_HEADER1 1 // if its 0 then header2.h will be called

#if USE_HEADER1 == 1
    #include "header1.h"
#else
    #include "header2.h"
#endif

int main() {
    f();
    return 0;
}