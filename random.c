#include <stdio.h>
#include <stdlib.h>

const char* rand_string(char* s, int length){
    
    for(int i = 0; i < length; i++){
        s[i] = (32 + rand() % (126 - 32 + 1));
    }
    
    s[length] = '\0';
    return s;
}