#include "myfuncs.h"
#include <stdio.h>

int main(void){
    for(int i = 0; i<3; i++){
        foo();
        goo();
    }
    foo();
    goo();
    for(int i = 0; i<3; i++){
        zoo();
    }
    zoo();

    return 0;
}
