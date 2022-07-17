#include "isogram.h"
#include <string.h>

bool is_isogram(const char phrase[]) {
    unsigned int ctr = 0;
    int ctrSearch=0;
    bool isIso = 1;
    char capLtrs[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lowerLtrs[]="abcdefghijklmnopqrstuvwxyz";
    int ctCap[26]; 
    int ctLower[26];
    
    for (ctr=0; ctr<strlen(phrase); ctr++){
        // if ((phrase[ctr]>='a' && phrase[ctr]<='z') || (phrase[ctr]>='A' && phrase[ctr]<='Z')) {

        // }
        for (ctrSearch=0; ctrSearch<27; ctrSearch++){
            if (phrase[ctr] == capLtrs[ctr]){
                ctCap[ctr]++;
                break;
            }
            if (phrase[ctr] == lowerLtrs[ctr]){
                ctLower[ctr]++;
                break;
            }
        }
        for (ctr=0; ctr<26; ctr++){
            capLtrs[ctr]=capLtrs[ctr]+ctLower[ctr];
        }
        for (ctr=0; ctr<26; ctr++){
            if (capLtrs[ctr]>1){
                isIso = 0;
                break;
            }
        }
    }    
    return isIso;
}

