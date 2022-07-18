#include "hamming.h"
#include <string.h>


int compute(const char *lhs, const char *rhs){
    int diff = 0;
    unsigned int cnt = 0;
    if (strlen(lhs)==strlen(rhs)){
        for (cnt=0; cnt<strlen(lhs); cnt++){
            if (*(rhs+cnt)!=*(lhs+cnt)){
                diff++;
            }
        }
    } 
    else {
        diff = -1;
    }
    return diff;
}
