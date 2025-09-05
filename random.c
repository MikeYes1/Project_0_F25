#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char randy[10000];

const char* rand_string(int length){
    
    for(int i = 0; i < length; i++){
        randy[i] = (32 + rand() % (126 - 32 + 1));
    }
    
    return randy;
}

int main(int argc, char **argv){
    srand(time(NULL));
    int length = 0;
    
    printf("Length of string: ");
    scanf("%d", &length);
    
    printf("%s\n", rand_string(length));
    return 0;
}