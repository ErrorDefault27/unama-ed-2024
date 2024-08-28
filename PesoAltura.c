#include <stdio.h>

typedef struct{
    int peso; // peso em quilogramas
    int altura; // altura em centimentros
} PesoAltura;

int main() {
    PesoAltura pessoa;
    pessoa.peso = 95;
    pessoa.altura = 110;
    printf("Peso: %i\nAltura: %i\n", pessoa.peso, pessoa.altura);
    
    if(pessoa.altura > 110 ) {
        printf("pode se divertir");
    } else {
        printf("pode ir embora\n");
    }

    printf("%i\n",(int) sizeof(PesoAltura));
    return 0;
}