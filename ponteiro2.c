#include <stdio.h>
#include <malloc.h>

int main() {

    int *j;
    j = (int *) malloc(sizeof(int)); // void * -> int *



    printf("j: %p\n", j);
    printf("j: %i\n", *j);
    printf("size of: %i\n",(int) sizeof(int));
    printf("size of: %i\n",(int) sizeof(j));

    return 0;
}