#include "isogram.h"
#include <string.h>
#include <stdio.h>

bool is_isogram(const char phrase[]) {
    unsigned int ctr = 0;
    int ctrSearch=0;
    bool isIso = 1;
    char capLtrs[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lowerLtrs[]="abcdefghijklmnopqrstuvwxyz";
    int ctCap[26]= {0}; 
    int ctLower[26]={0};

    if (phrase!=NULL){
        for (ctr=0; ctr<strlen(phrase); ctr++){
        // if ((phrase[ctr]>='a' && phrase[ctr]<='z') || (phrase[ctr]>='A' && phrase[ctr]<='Z')) {

        // }
        for (ctrSearch=0; ctrSearch<26; ctrSearch++){
            if (phrase[ctr] == capLtrs[ctrSearch]){
                ctCap[ctrSearch]++;
                break;
            }
            if (phrase[ctr] == lowerLtrs[ctrSearch]){
                ctLower[ctrSearch]++;
                break;
            }
        }
        
    }
    for (ctr=0; ctr<26; ctr++){
            ctCap[ctr]=ctCap[ctr]+ctLower[ctr];
        }
    for (ctr=0; ctr<26; ctr++){
        if (ctCap[ctr]>1){
            isIso = 0;
            break;
        }
    } 

    } else {
        isIso = 0;
    }
    
    
        
    // for (ctr=0; ctr<26; ctr++) {
    //     printf("\nThe count at index %d is %d", ctr, ctCap[ctr]);
    // }
    // printf("\n\n");
    // for (ctr=0; ctr<26; ctr++) {
    //     printf("\nThe char at index %d is %c", ctr, capLtrs[ctr]);
    // }
    return isIso;
}

// main(){
//     is_isogram("Test string");
// }

