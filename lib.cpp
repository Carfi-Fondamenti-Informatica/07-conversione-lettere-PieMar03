#include "lib.h"

bool car (char &a) {
    bool var = false ;
    if((a>64) and (a<91)){
        a=a+32 ;
        var=true;
    }else if ((a>96) and (a<123)){
        a=a-32;
        var=true;
    }else {
        var=false;
    }return var;
}
