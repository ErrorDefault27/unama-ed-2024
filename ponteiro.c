#include <stdio.h>
#include <malloc.h>

int main() {

    
    int i = 5; //armazenando no var 
    int *j = &i; //* = ponteiro localizar endereço, & = armazena endereço // ponteiro j recebe o indereço(&) de i
    i = i + 1;

    printf("i: %i\n", i);
    printf("j: %p\n", j);
    printf("i: %p\n", &i);
    printf("j: %p\n", j);
    printf("j: %i\n", *j);

    return 0;
}