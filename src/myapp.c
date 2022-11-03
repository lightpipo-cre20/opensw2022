#include "myfuncs.h"

int main(void){
    for(int i = 0; i<3; i++){
        foo();
        goo();
    }
    foo();
    goo();

    return 0;
}
