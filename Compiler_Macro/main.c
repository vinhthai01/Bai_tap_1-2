#include <stdio.h>

/*
#define ARRAY(...)                                              \
int array[] = {__VA_ARGS__};                                    \
    int i = 0;                                                  \
do {                                                            \
    printf ("array[%d] = %d \n", i,array[i]);         clea             \
    i++;                                                        \
} while (i < sizeof(array)/sizeof(int))
*/

#define ARRAY(...)                  \
int array[] = {__VA_ARGS__};        \
int i = 0;                          \
for ( ; i < sizeof(array)/sizeof(int) ; i++){        \
    printf ("array[%d] = %d\n", i,array[i]);         \
}





int main( int argc, char const *argv[] ){

    ARRAY(1,5,3);
    return 0;
}

